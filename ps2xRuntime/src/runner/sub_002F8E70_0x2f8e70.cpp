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

// Function: sub_002F8E70
// Address: 0x2f8e70 - 0x2f9358
void sub_002F8E70_0x2f8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8E70_0x2f8e70");
#endif

    switch (ctx->pc) {
        case 0x2f8e70u: goto label_2f8e70;
        case 0x2f8e74u: goto label_2f8e74;
        case 0x2f8e78u: goto label_2f8e78;
        case 0x2f8e7cu: goto label_2f8e7c;
        case 0x2f8e80u: goto label_2f8e80;
        case 0x2f8e84u: goto label_2f8e84;
        case 0x2f8e88u: goto label_2f8e88;
        case 0x2f8e8cu: goto label_2f8e8c;
        case 0x2f8e90u: goto label_2f8e90;
        case 0x2f8e94u: goto label_2f8e94;
        case 0x2f8e98u: goto label_2f8e98;
        case 0x2f8e9cu: goto label_2f8e9c;
        case 0x2f8ea0u: goto label_2f8ea0;
        case 0x2f8ea4u: goto label_2f8ea4;
        case 0x2f8ea8u: goto label_2f8ea8;
        case 0x2f8eacu: goto label_2f8eac;
        case 0x2f8eb0u: goto label_2f8eb0;
        case 0x2f8eb4u: goto label_2f8eb4;
        case 0x2f8eb8u: goto label_2f8eb8;
        case 0x2f8ebcu: goto label_2f8ebc;
        case 0x2f8ec0u: goto label_2f8ec0;
        case 0x2f8ec4u: goto label_2f8ec4;
        case 0x2f8ec8u: goto label_2f8ec8;
        case 0x2f8eccu: goto label_2f8ecc;
        case 0x2f8ed0u: goto label_2f8ed0;
        case 0x2f8ed4u: goto label_2f8ed4;
        case 0x2f8ed8u: goto label_2f8ed8;
        case 0x2f8edcu: goto label_2f8edc;
        case 0x2f8ee0u: goto label_2f8ee0;
        case 0x2f8ee4u: goto label_2f8ee4;
        case 0x2f8ee8u: goto label_2f8ee8;
        case 0x2f8eecu: goto label_2f8eec;
        case 0x2f8ef0u: goto label_2f8ef0;
        case 0x2f8ef4u: goto label_2f8ef4;
        case 0x2f8ef8u: goto label_2f8ef8;
        case 0x2f8efcu: goto label_2f8efc;
        case 0x2f8f00u: goto label_2f8f00;
        case 0x2f8f04u: goto label_2f8f04;
        case 0x2f8f08u: goto label_2f8f08;
        case 0x2f8f0cu: goto label_2f8f0c;
        case 0x2f8f10u: goto label_2f8f10;
        case 0x2f8f14u: goto label_2f8f14;
        case 0x2f8f18u: goto label_2f8f18;
        case 0x2f8f1cu: goto label_2f8f1c;
        case 0x2f8f20u: goto label_2f8f20;
        case 0x2f8f24u: goto label_2f8f24;
        case 0x2f8f28u: goto label_2f8f28;
        case 0x2f8f2cu: goto label_2f8f2c;
        case 0x2f8f30u: goto label_2f8f30;
        case 0x2f8f34u: goto label_2f8f34;
        case 0x2f8f38u: goto label_2f8f38;
        case 0x2f8f3cu: goto label_2f8f3c;
        case 0x2f8f40u: goto label_2f8f40;
        case 0x2f8f44u: goto label_2f8f44;
        case 0x2f8f48u: goto label_2f8f48;
        case 0x2f8f4cu: goto label_2f8f4c;
        case 0x2f8f50u: goto label_2f8f50;
        case 0x2f8f54u: goto label_2f8f54;
        case 0x2f8f58u: goto label_2f8f58;
        case 0x2f8f5cu: goto label_2f8f5c;
        case 0x2f8f60u: goto label_2f8f60;
        case 0x2f8f64u: goto label_2f8f64;
        case 0x2f8f68u: goto label_2f8f68;
        case 0x2f8f6cu: goto label_2f8f6c;
        case 0x2f8f70u: goto label_2f8f70;
        case 0x2f8f74u: goto label_2f8f74;
        case 0x2f8f78u: goto label_2f8f78;
        case 0x2f8f7cu: goto label_2f8f7c;
        case 0x2f8f80u: goto label_2f8f80;
        case 0x2f8f84u: goto label_2f8f84;
        case 0x2f8f88u: goto label_2f8f88;
        case 0x2f8f8cu: goto label_2f8f8c;
        case 0x2f8f90u: goto label_2f8f90;
        case 0x2f8f94u: goto label_2f8f94;
        case 0x2f8f98u: goto label_2f8f98;
        case 0x2f8f9cu: goto label_2f8f9c;
        case 0x2f8fa0u: goto label_2f8fa0;
        case 0x2f8fa4u: goto label_2f8fa4;
        case 0x2f8fa8u: goto label_2f8fa8;
        case 0x2f8facu: goto label_2f8fac;
        case 0x2f8fb0u: goto label_2f8fb0;
        case 0x2f8fb4u: goto label_2f8fb4;
        case 0x2f8fb8u: goto label_2f8fb8;
        case 0x2f8fbcu: goto label_2f8fbc;
        case 0x2f8fc0u: goto label_2f8fc0;
        case 0x2f8fc4u: goto label_2f8fc4;
        case 0x2f8fc8u: goto label_2f8fc8;
        case 0x2f8fccu: goto label_2f8fcc;
        case 0x2f8fd0u: goto label_2f8fd0;
        case 0x2f8fd4u: goto label_2f8fd4;
        case 0x2f8fd8u: goto label_2f8fd8;
        case 0x2f8fdcu: goto label_2f8fdc;
        case 0x2f8fe0u: goto label_2f8fe0;
        case 0x2f8fe4u: goto label_2f8fe4;
        case 0x2f8fe8u: goto label_2f8fe8;
        case 0x2f8fecu: goto label_2f8fec;
        case 0x2f8ff0u: goto label_2f8ff0;
        case 0x2f8ff4u: goto label_2f8ff4;
        case 0x2f8ff8u: goto label_2f8ff8;
        case 0x2f8ffcu: goto label_2f8ffc;
        case 0x2f9000u: goto label_2f9000;
        case 0x2f9004u: goto label_2f9004;
        case 0x2f9008u: goto label_2f9008;
        case 0x2f900cu: goto label_2f900c;
        case 0x2f9010u: goto label_2f9010;
        case 0x2f9014u: goto label_2f9014;
        case 0x2f9018u: goto label_2f9018;
        case 0x2f901cu: goto label_2f901c;
        case 0x2f9020u: goto label_2f9020;
        case 0x2f9024u: goto label_2f9024;
        case 0x2f9028u: goto label_2f9028;
        case 0x2f902cu: goto label_2f902c;
        case 0x2f9030u: goto label_2f9030;
        case 0x2f9034u: goto label_2f9034;
        case 0x2f9038u: goto label_2f9038;
        case 0x2f903cu: goto label_2f903c;
        case 0x2f9040u: goto label_2f9040;
        case 0x2f9044u: goto label_2f9044;
        case 0x2f9048u: goto label_2f9048;
        case 0x2f904cu: goto label_2f904c;
        case 0x2f9050u: goto label_2f9050;
        case 0x2f9054u: goto label_2f9054;
        case 0x2f9058u: goto label_2f9058;
        case 0x2f905cu: goto label_2f905c;
        case 0x2f9060u: goto label_2f9060;
        case 0x2f9064u: goto label_2f9064;
        case 0x2f9068u: goto label_2f9068;
        case 0x2f906cu: goto label_2f906c;
        case 0x2f9070u: goto label_2f9070;
        case 0x2f9074u: goto label_2f9074;
        case 0x2f9078u: goto label_2f9078;
        case 0x2f907cu: goto label_2f907c;
        case 0x2f9080u: goto label_2f9080;
        case 0x2f9084u: goto label_2f9084;
        case 0x2f9088u: goto label_2f9088;
        case 0x2f908cu: goto label_2f908c;
        case 0x2f9090u: goto label_2f9090;
        case 0x2f9094u: goto label_2f9094;
        case 0x2f9098u: goto label_2f9098;
        case 0x2f909cu: goto label_2f909c;
        case 0x2f90a0u: goto label_2f90a0;
        case 0x2f90a4u: goto label_2f90a4;
        case 0x2f90a8u: goto label_2f90a8;
        case 0x2f90acu: goto label_2f90ac;
        case 0x2f90b0u: goto label_2f90b0;
        case 0x2f90b4u: goto label_2f90b4;
        case 0x2f90b8u: goto label_2f90b8;
        case 0x2f90bcu: goto label_2f90bc;
        case 0x2f90c0u: goto label_2f90c0;
        case 0x2f90c4u: goto label_2f90c4;
        case 0x2f90c8u: goto label_2f90c8;
        case 0x2f90ccu: goto label_2f90cc;
        case 0x2f90d0u: goto label_2f90d0;
        case 0x2f90d4u: goto label_2f90d4;
        case 0x2f90d8u: goto label_2f90d8;
        case 0x2f90dcu: goto label_2f90dc;
        case 0x2f90e0u: goto label_2f90e0;
        case 0x2f90e4u: goto label_2f90e4;
        case 0x2f90e8u: goto label_2f90e8;
        case 0x2f90ecu: goto label_2f90ec;
        case 0x2f90f0u: goto label_2f90f0;
        case 0x2f90f4u: goto label_2f90f4;
        case 0x2f90f8u: goto label_2f90f8;
        case 0x2f90fcu: goto label_2f90fc;
        case 0x2f9100u: goto label_2f9100;
        case 0x2f9104u: goto label_2f9104;
        case 0x2f9108u: goto label_2f9108;
        case 0x2f910cu: goto label_2f910c;
        case 0x2f9110u: goto label_2f9110;
        case 0x2f9114u: goto label_2f9114;
        case 0x2f9118u: goto label_2f9118;
        case 0x2f911cu: goto label_2f911c;
        case 0x2f9120u: goto label_2f9120;
        case 0x2f9124u: goto label_2f9124;
        case 0x2f9128u: goto label_2f9128;
        case 0x2f912cu: goto label_2f912c;
        case 0x2f9130u: goto label_2f9130;
        case 0x2f9134u: goto label_2f9134;
        case 0x2f9138u: goto label_2f9138;
        case 0x2f913cu: goto label_2f913c;
        case 0x2f9140u: goto label_2f9140;
        case 0x2f9144u: goto label_2f9144;
        case 0x2f9148u: goto label_2f9148;
        case 0x2f914cu: goto label_2f914c;
        case 0x2f9150u: goto label_2f9150;
        case 0x2f9154u: goto label_2f9154;
        case 0x2f9158u: goto label_2f9158;
        case 0x2f915cu: goto label_2f915c;
        case 0x2f9160u: goto label_2f9160;
        case 0x2f9164u: goto label_2f9164;
        case 0x2f9168u: goto label_2f9168;
        case 0x2f916cu: goto label_2f916c;
        case 0x2f9170u: goto label_2f9170;
        case 0x2f9174u: goto label_2f9174;
        case 0x2f9178u: goto label_2f9178;
        case 0x2f917cu: goto label_2f917c;
        case 0x2f9180u: goto label_2f9180;
        case 0x2f9184u: goto label_2f9184;
        case 0x2f9188u: goto label_2f9188;
        case 0x2f918cu: goto label_2f918c;
        case 0x2f9190u: goto label_2f9190;
        case 0x2f9194u: goto label_2f9194;
        case 0x2f9198u: goto label_2f9198;
        case 0x2f919cu: goto label_2f919c;
        case 0x2f91a0u: goto label_2f91a0;
        case 0x2f91a4u: goto label_2f91a4;
        case 0x2f91a8u: goto label_2f91a8;
        case 0x2f91acu: goto label_2f91ac;
        case 0x2f91b0u: goto label_2f91b0;
        case 0x2f91b4u: goto label_2f91b4;
        case 0x2f91b8u: goto label_2f91b8;
        case 0x2f91bcu: goto label_2f91bc;
        case 0x2f91c0u: goto label_2f91c0;
        case 0x2f91c4u: goto label_2f91c4;
        case 0x2f91c8u: goto label_2f91c8;
        case 0x2f91ccu: goto label_2f91cc;
        case 0x2f91d0u: goto label_2f91d0;
        case 0x2f91d4u: goto label_2f91d4;
        case 0x2f91d8u: goto label_2f91d8;
        case 0x2f91dcu: goto label_2f91dc;
        case 0x2f91e0u: goto label_2f91e0;
        case 0x2f91e4u: goto label_2f91e4;
        case 0x2f91e8u: goto label_2f91e8;
        case 0x2f91ecu: goto label_2f91ec;
        case 0x2f91f0u: goto label_2f91f0;
        case 0x2f91f4u: goto label_2f91f4;
        case 0x2f91f8u: goto label_2f91f8;
        case 0x2f91fcu: goto label_2f91fc;
        case 0x2f9200u: goto label_2f9200;
        case 0x2f9204u: goto label_2f9204;
        case 0x2f9208u: goto label_2f9208;
        case 0x2f920cu: goto label_2f920c;
        case 0x2f9210u: goto label_2f9210;
        case 0x2f9214u: goto label_2f9214;
        case 0x2f9218u: goto label_2f9218;
        case 0x2f921cu: goto label_2f921c;
        case 0x2f9220u: goto label_2f9220;
        case 0x2f9224u: goto label_2f9224;
        case 0x2f9228u: goto label_2f9228;
        case 0x2f922cu: goto label_2f922c;
        case 0x2f9230u: goto label_2f9230;
        case 0x2f9234u: goto label_2f9234;
        case 0x2f9238u: goto label_2f9238;
        case 0x2f923cu: goto label_2f923c;
        case 0x2f9240u: goto label_2f9240;
        case 0x2f9244u: goto label_2f9244;
        case 0x2f9248u: goto label_2f9248;
        case 0x2f924cu: goto label_2f924c;
        case 0x2f9250u: goto label_2f9250;
        case 0x2f9254u: goto label_2f9254;
        case 0x2f9258u: goto label_2f9258;
        case 0x2f925cu: goto label_2f925c;
        case 0x2f9260u: goto label_2f9260;
        case 0x2f9264u: goto label_2f9264;
        case 0x2f9268u: goto label_2f9268;
        case 0x2f926cu: goto label_2f926c;
        case 0x2f9270u: goto label_2f9270;
        case 0x2f9274u: goto label_2f9274;
        case 0x2f9278u: goto label_2f9278;
        case 0x2f927cu: goto label_2f927c;
        case 0x2f9280u: goto label_2f9280;
        case 0x2f9284u: goto label_2f9284;
        case 0x2f9288u: goto label_2f9288;
        case 0x2f928cu: goto label_2f928c;
        case 0x2f9290u: goto label_2f9290;
        case 0x2f9294u: goto label_2f9294;
        case 0x2f9298u: goto label_2f9298;
        case 0x2f929cu: goto label_2f929c;
        case 0x2f92a0u: goto label_2f92a0;
        case 0x2f92a4u: goto label_2f92a4;
        case 0x2f92a8u: goto label_2f92a8;
        case 0x2f92acu: goto label_2f92ac;
        case 0x2f92b0u: goto label_2f92b0;
        case 0x2f92b4u: goto label_2f92b4;
        case 0x2f92b8u: goto label_2f92b8;
        case 0x2f92bcu: goto label_2f92bc;
        case 0x2f92c0u: goto label_2f92c0;
        case 0x2f92c4u: goto label_2f92c4;
        case 0x2f92c8u: goto label_2f92c8;
        case 0x2f92ccu: goto label_2f92cc;
        case 0x2f92d0u: goto label_2f92d0;
        case 0x2f92d4u: goto label_2f92d4;
        case 0x2f92d8u: goto label_2f92d8;
        case 0x2f92dcu: goto label_2f92dc;
        case 0x2f92e0u: goto label_2f92e0;
        case 0x2f92e4u: goto label_2f92e4;
        case 0x2f92e8u: goto label_2f92e8;
        case 0x2f92ecu: goto label_2f92ec;
        case 0x2f92f0u: goto label_2f92f0;
        case 0x2f92f4u: goto label_2f92f4;
        case 0x2f92f8u: goto label_2f92f8;
        case 0x2f92fcu: goto label_2f92fc;
        case 0x2f9300u: goto label_2f9300;
        case 0x2f9304u: goto label_2f9304;
        case 0x2f9308u: goto label_2f9308;
        case 0x2f930cu: goto label_2f930c;
        case 0x2f9310u: goto label_2f9310;
        case 0x2f9314u: goto label_2f9314;
        case 0x2f9318u: goto label_2f9318;
        case 0x2f931cu: goto label_2f931c;
        case 0x2f9320u: goto label_2f9320;
        case 0x2f9324u: goto label_2f9324;
        case 0x2f9328u: goto label_2f9328;
        case 0x2f932cu: goto label_2f932c;
        case 0x2f9330u: goto label_2f9330;
        case 0x2f9334u: goto label_2f9334;
        case 0x2f9338u: goto label_2f9338;
        case 0x2f933cu: goto label_2f933c;
        case 0x2f9340u: goto label_2f9340;
        case 0x2f9344u: goto label_2f9344;
        case 0x2f9348u: goto label_2f9348;
        case 0x2f934cu: goto label_2f934c;
        case 0x2f9350u: goto label_2f9350;
        case 0x2f9354u: goto label_2f9354;
        default: break;
    }

    ctx->pc = 0x2f8e70u;

label_2f8e70:
    // 0x2f8e70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2f8e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2f8e74:
    // 0x2f8e74: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2f8e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2f8e78:
    // 0x2f8e78: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2f8e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2f8e7c:
    // 0x2f8e7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f8e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8e80:
    // 0x2f8e80: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2f8e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2f8e84:
    // 0x2f8e84: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2f8e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2f8e88:
    // 0x2f8e88: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2f8e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2f8e8c:
    // 0x2f8e8c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2f8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2f8e90:
    // 0x2f8e90: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2f8e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2f8e94:
    // 0x2f8e94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f8e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f8e98:
    // 0x2f8e98: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2f8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2f8e9c:
    // 0x2f8e9c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2f8e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8ea0:
    // 0x2f8ea0: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2f8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2f8ea4:
    // 0x2f8ea4: 0xc0e409a  jal         func_390268
label_2f8ea8:
    if (ctx->pc == 0x2F8EA8u) {
        ctx->pc = 0x2F8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EA4u;
        // 0x2f8ea8: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EACu;
        goto label_2f8eac;
    }
    ctx->pc = 0x2F8EA4u;
    SET_GPR_U32(ctx, 31, 0x2F8EACu);
    ctx->pc = 0x2F8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EA4u;
    // 0x2f8ea8: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F8EA4u, 0x2F8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EACu;
label_2f8eac:
    // 0x2f8eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8eb0:
    // 0x2f8eb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f8eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8eb4:
    // 0x2f8eb4: 0xc0a352c  jal         func_28D4B0
label_2f8eb8:
    if (ctx->pc == 0x2F8EB8u) {
        ctx->pc = 0x2F8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EB4u;
        // 0x2f8eb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EBCu;
        goto label_2f8ebc;
    }
    ctx->pc = 0x2F8EB4u;
    SET_GPR_U32(ctx, 31, 0x2F8EBCu);
    ctx->pc = 0x2F8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EB4u;
    // 0x2f8eb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2F8EB4u, 0x2F8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EBCu;
label_2f8ebc:
    // 0x2f8ebc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f8ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8ec0:
    // 0x2f8ec0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f8ec0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ec4:
    // 0x2f8ec4: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2f8ec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2f8ec8:
    // 0x2f8ec8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_2f8ecc:
    if (ctx->pc == 0x2F8ECCu) {
        ctx->pc = 0x2F8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EC8u;
        // 0x2f8ecc: 0x2982a  slt         $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8ED0u;
        goto label_2f8ed0;
    }
    ctx->pc = 0x2F8EC8u;
    {
        const bool branch_taken_0x2f8ec8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EC8u;
        // 0x2f8ecc: 0x2982a  slt         $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ec8) {
            ctx->pc = 0x2F8F14u;
            goto label_2f8f14;
        }
    }
    ctx->pc = 0x2F8ED0u;
label_2f8ed0:
    // 0x2f8ed0: 0xc0a36c2  jal         func_28DB08
label_2f8ed4:
    if (ctx->pc == 0x2F8ED4u) {
        ctx->pc = 0x2F8ED8u;
        goto label_2f8ed8;
    }
    ctx->pc = 0x2F8ED0u;
    SET_GPR_U32(ctx, 31, 0x2F8ED8u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2F8ED0u, 0x2F8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8ED8u;
label_2f8ed8:
    // 0x2f8ed8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f8edc:
    // 0x2f8edc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2f8edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2f8ee0:
    // 0x2f8ee0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2f8ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2f8ee4:
    // 0x2f8ee4: 0xa0f809  jalr        $a1
label_2f8ee8:
    if (ctx->pc == 0x2F8EE8u) {
        ctx->pc = 0x2F8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EE4u;
        // 0x2f8ee8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EECu;
        goto label_2f8eec;
    }
    ctx->pc = 0x2F8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F8EECu);
        ctx->pc = 0x2F8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EE4u;
        // 0x2f8ee8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8EE4u, 0x2F8EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8EECu;
label_2f8eec:
    // 0x2f8eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ef0:
    // 0x2f8ef0: 0x1613010d  bne         $s0, $s3, . + 4 + (0x10D << 2)
label_2f8ef4:
    if (ctx->pc == 0x2F8EF4u) {
        ctx->pc = 0x2F8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EF0u;
        // 0x2f8ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EF8u;
        goto label_2f8ef8;
    }
    ctx->pc = 0x2F8EF0u;
    {
        const bool branch_taken_0x2f8ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EF0u;
        // 0x2f8ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ef0) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F8EF8u;
label_2f8ef8:
    // 0x2f8ef8: 0xc08a08a  jal         func_228228
label_2f8efc:
    if (ctx->pc == 0x2F8EFCu) {
        ctx->pc = 0x2F8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EF8u;
        // 0x2f8efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F00u;
        goto label_2f8f00;
    }
    ctx->pc = 0x2F8EF8u;
    SET_GPR_U32(ctx, 31, 0x2F8F00u);
    ctx->pc = 0x2F8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EF8u;
    // 0x2f8efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2F8EF8u, 0x2F8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F00u;
label_2f8f00:
    // 0x2f8f00: 0x14500109  bne         $v0, $s0, . + 4 + (0x109 << 2)
label_2f8f04:
    if (ctx->pc == 0x2F8F04u) {
        ctx->pc = 0x2F8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F00u;
        // 0x2f8f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F08u;
        goto label_2f8f08;
    }
    ctx->pc = 0x2F8F00u;
    {
        const bool branch_taken_0x2f8f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F00u;
        // 0x2f8f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f00) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F8F08u;
label_2f8f08:
    // 0x2f8f08: 0xc0a36c8  jal         func_28DB20
label_2f8f0c:
    if (ctx->pc == 0x2F8F0Cu) {
        ctx->pc = 0x2F8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F08u;
        // 0x2f8f0c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F10u;
        goto label_2f8f10;
    }
    ctx->pc = 0x2F8F08u;
    SET_GPR_U32(ctx, 31, 0x2F8F10u);
    ctx->pc = 0x2F8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F08u;
    // 0x2f8f0c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F8F08u, 0x2F8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F10u;
label_2f8f10:
    // 0x2f8f10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8f14:
    // 0x2f8f14: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2f8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2f8f18:
    // 0x2f8f18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f8f1c:
    if (ctx->pc == 0x2F8F1Cu) {
        ctx->pc = 0x2F8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F18u;
        // 0x2f8f1c: 0x26350090  addiu       $s5, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F20u;
        goto label_2f8f20;
    }
    ctx->pc = 0x2F8F18u;
    {
        const bool branch_taken_0x2f8f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F18u;
        // 0x2f8f1c: 0x26350090  addiu       $s5, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f18) {
            ctx->pc = 0x2F8F48u;
            goto label_2f8f48;
        }
    }
    ctx->pc = 0x2F8F20u;
label_2f8f20:
    // 0x2f8f20: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2f8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2f8f24:
    // 0x2f8f24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f8f24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8f28:
    // 0x2f8f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f8f2c:
    // 0x2f8f2c: 0x2c63001f  sltiu       $v1, $v1, 0x1F
    ctx->pc = 0x2f8f2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2f8f30:
    // 0x2f8f30: 0x146000fc  bnez        $v1, . + 4 + (0xFC << 2)
label_2f8f34:
    if (ctx->pc == 0x2F8F34u) {
        ctx->pc = 0x2F8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F30u;
        // 0x2f8f34: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F38u;
        goto label_2f8f38;
    }
    ctx->pc = 0x2F8F30u;
    {
        const bool branch_taken_0x2f8f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F30u;
        // 0x2f8f34: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f30) {
            ctx->pc = 0x2F9324u;
            goto label_2f9324;
        }
    }
    ctx->pc = 0x2F8F38u;
label_2f8f38:
    // 0x2f8f38: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2f8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_2f8f3c:
    // 0x2f8f3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8f40:
    // 0x2f8f40: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_2f8f44:
    if (ctx->pc == 0x2F8F44u) {
        ctx->pc = 0x2F8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F40u;
        // 0x2f8f44: 0xa240002a  sb          $zero, 0x2A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F48u;
        goto label_2f8f48;
    }
    ctx->pc = 0x2F8F40u;
    {
        const bool branch_taken_0x2f8f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F40u;
        // 0x2f8f44: 0xa240002a  sb          $zero, 0x2A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f40) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F8F48u;
label_2f8f48:
    // 0x2f8f48: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f8f4c:
    // 0x2f8f4c: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x2f8f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2f8f50:
    // 0x2f8f50: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x2f8f50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f8f54:
    // 0x2f8f54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f8f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f8f58:
    // 0x2f8f58: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2f8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2f8f5c:
    // 0x2f8f5c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f8f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8f60:
    // 0x2f8f60: 0xc0a3fc6  jal         func_28FF18
label_2f8f64:
    if (ctx->pc == 0x2F8F64u) {
        ctx->pc = 0x2F8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F60u;
        // 0x2f8f64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F68u;
        goto label_2f8f68;
    }
    ctx->pc = 0x2F8F60u;
    SET_GPR_U32(ctx, 31, 0x2F8F68u);
    ctx->pc = 0x2F8F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F60u;
    // 0x2f8f64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF18u, 0x2F8F60u, 0x2F8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F68u;
label_2f8f68:
    // 0x2f8f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8f6c:
    // 0x2f8f6c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_2f8f70:
    if (ctx->pc == 0x2F8F70u) {
        ctx->pc = 0x2F8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F6Cu;
        // 0x2f8f70: 0x7a450010  lq          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F74u;
        goto label_2f8f74;
    }
    ctx->pc = 0x2F8F6Cu;
    {
        const bool branch_taken_0x2f8f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8f6c) {
            ctx->pc = 0x2F8F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8F6Cu;
            // 0x2f8f70: 0x7a450010  lq          $a1, 0x10($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F7Cu;
            goto label_2f8f7c;
        }
    }
    ctx->pc = 0x2F8F74u;
label_2f8f74:
    // 0x2f8f74: 0x100000ec  b           . + 4 + (0xEC << 2)
label_2f8f78:
    if (ctx->pc == 0x2F8F78u) {
        ctx->pc = 0x2F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F74u;
        // 0x2f8f78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F7Cu;
        goto label_2f8f7c;
    }
    ctx->pc = 0x2F8F74u;
    {
        const bool branch_taken_0x2f8f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F74u;
        // 0x2f8f78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f74) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F8F7Cu;
label_2f8f7c:
    // 0x2f8f7c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2f8f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f8f80:
    // 0x2f8f80: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2f8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_2f8f84:
    // 0x2f8f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8f88:
    // 0x2f8f88: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2f8f88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8f8c:
    // 0x2f8f8c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2f8f8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8f90:
    // 0x2f8f90: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x2f8f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2f8f94:
    // 0x2f8f94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f8f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f8f98:
    // 0x2f8f98: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2f8f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2f8f9c:
    // 0x2f8f9c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f8f9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f8fa0:
    // 0x2f8fa0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f8fa0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f8fa4:
    // 0x2f8fa4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f8fa4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f8fa8:
    // 0x2f8fa8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2f8fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2f8fac:
    // 0x2f8fac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f8facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f8fb0:
    // 0x2f8fb0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2f8fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f8fb4:
    // 0x2f8fb4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f8fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f8fb8:
    // 0x2f8fb8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f8fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f8fbc:
    // 0x2f8fbc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f8fbcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f8fc0:
    // 0x2f8fc0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f8fc0u;
    // VWAITQ (Q already resolved in this runtime)
label_2f8fc4:
    // 0x2f8fc4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2f8fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8fc8:
    // 0x2f8fc8: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x2f8fc8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8fcc:
    // 0x2f8fcc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f8fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f8fd0:
    // 0x2f8fd0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2f8fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2f8fd4:
    // 0x2f8fd4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2f8fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2f8fd8:
    // 0x2f8fd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f8fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8fdc:
    // 0x2f8fdc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f8fdcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8fe0:
    // 0x2f8fe0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f8fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f8fe4:
    // 0x2f8fe4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2f8fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2f8fe8:
    // 0x2f8fe8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f8fe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f8fec:
    // 0x2f8fec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f8fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f8ff0:
    // 0x2f8ff0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f8ff0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f8ff4:
    // 0x2f8ff4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x2f8ff4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f8ff8:
    // 0x2f8ff8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2f8ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2f8ffc:
    // 0x2f8ffc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2f8ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_2f9000:
    // 0x2f9000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9004:
    // 0x2f9004: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f9004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f9008:
    // 0x2f9008: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f9008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2f900c:
    // 0x2f900c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f900cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f9010:
    // 0x2f9010: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2f9010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_2f9014:
    // 0x2f9014: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x2f9014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_2f9018:
    // 0x2f9018: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2f9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_2f901c:
    // 0x2f901c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x2f901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_2f9020:
    // 0x2f9020: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2f9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2f9024:
    // 0x2f9024: 0xc0d3e54  jal         func_34F950
label_2f9028:
    if (ctx->pc == 0x2F9028u) {
        ctx->pc = 0x2F9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9024u;
        // 0x2f9028: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F902Cu;
        goto label_2f902c;
    }
    ctx->pc = 0x2F9024u;
    SET_GPR_U32(ctx, 31, 0x2F902Cu);
    ctx->pc = 0x2F9028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9024u;
    // 0x2f9028: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2F9024u, 0x2F902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F902Cu;
label_2f902c:
    // 0x2f902c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9030:
    // 0x2f9030: 0xc0a3fce  jal         func_28FF38
label_2f9034:
    if (ctx->pc == 0x2F9034u) {
        ctx->pc = 0x2F9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9030u;
        // 0x2f9034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9038u;
        goto label_2f9038;
    }
    ctx->pc = 0x2F9030u;
    SET_GPR_U32(ctx, 31, 0x2F9038u);
    ctx->pc = 0x2F9034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9030u;
    // 0x2f9034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2F9030u, 0x2F9038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9038u;
label_2f9038:
    // 0x2f9038: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2f903c:
    if (ctx->pc == 0x2F903Cu) {
        ctx->pc = 0x2F903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9038u;
        // 0x2f903c: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9040u;
        goto label_2f9040;
    }
    ctx->pc = 0x2F9038u;
    {
        const bool branch_taken_0x2f9038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9038) {
            ctx->pc = 0x2F903Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9038u;
            // 0x2f903c: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9050u;
            goto label_2f9050;
        }
    }
    ctx->pc = 0x2F9040u;
label_2f9040:
    // 0x2f9040: 0x9242002a  lbu         $v0, 0x2A($s2)
    ctx->pc = 0x2f9040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_2f9044:
    // 0x2f9044: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_2f9048:
    if (ctx->pc == 0x2F9048u) {
        ctx->pc = 0x2F9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9044u;
        // 0x2f9048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F904Cu;
        goto label_2f904c;
    }
    ctx->pc = 0x2F9044u;
    {
        const bool branch_taken_0x2f9044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9044u;
        // 0x2f9048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9044) {
            ctx->pc = 0x2F91C4u;
            goto label_2f91c4;
        }
    }
    ctx->pc = 0x2F904Cu;
label_2f904c:
    // 0x2f904c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2f904cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2f9050:
    // 0x2f9050: 0x14a00055  bnez        $a1, . + 4 + (0x55 << 2)
label_2f9054:
    if (ctx->pc == 0x2F9054u) {
        ctx->pc = 0x2F9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9050u;
        // 0x2f9054: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9058u;
        goto label_2f9058;
    }
    ctx->pc = 0x2F9050u;
    {
        const bool branch_taken_0x2f9050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9050u;
        // 0x2f9054: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9050) {
            ctx->pc = 0x2F91A8u;
            goto label_2f91a8;
        }
    }
    ctx->pc = 0x2F9058u;
label_2f9058:
    // 0x2f9058: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2f9058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2f905c:
    // 0x2f905c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9060:
    // 0x2f9060: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2f9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2f9064:
    // 0x2f9064: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2f9064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2f9068:
    // 0x2f9068: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2f9068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2f906c:
    // 0x2f906c: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2f906cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2f9070:
    // 0x2f9070: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x2f9070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2f9074:
    // 0x2f9074: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f9074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f9078:
    // 0x2f9078: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2f9078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2f907c:
    // 0x2f907c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f907cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9080:
    // 0x2f9080: 0xc0a40d2  jal         func_290348
label_2f9084:
    if (ctx->pc == 0x2F9084u) {
        ctx->pc = 0x2F9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9080u;
        // 0x2f9084: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9088u;
        goto label_2f9088;
    }
    ctx->pc = 0x2F9080u;
    SET_GPR_U32(ctx, 31, 0x2F9088u);
    ctx->pc = 0x2F9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9080u;
    // 0x2f9084: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x2F9080u, 0x2F9088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9088u;
label_2f9088:
    // 0x2f9088: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2f908c:
    if (ctx->pc == 0x2F908Cu) {
        ctx->pc = 0x2F908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9088u;
        // 0x2f908c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9090u;
        goto label_2f9090;
    }
    ctx->pc = 0x2F9088u;
    {
        const bool branch_taken_0x2f9088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9088u;
        // 0x2f908c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9088) {
            ctx->pc = 0x2F9118u;
            goto label_2f9118;
        }
    }
    ctx->pc = 0x2F9090u;
label_2f9090:
    // 0x2f9090: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f9090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9094:
    // 0x2f9094: 0xc0a3658  jal         func_28D960
label_2f9098:
    if (ctx->pc == 0x2F9098u) {
        ctx->pc = 0x2F9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9094u;
        // 0x2f9098: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F909Cu;
        goto label_2f909c;
    }
    ctx->pc = 0x2F9094u;
    SET_GPR_U32(ctx, 31, 0x2F909Cu);
    ctx->pc = 0x2F9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9094u;
    // 0x2f9098: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2F9094u, 0x2F909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F909Cu;
label_2f909c:
    // 0x2f909c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f909cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f90a0:
    // 0x2f90a0: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
label_2f90a4:
    if (ctx->pc == 0x2F90A4u) {
        ctx->pc = 0x2F90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90A0u;
        // 0x2f90a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90A8u;
        goto label_2f90a8;
    }
    ctx->pc = 0x2F90A0u;
    {
        const bool branch_taken_0x2f90a0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90A0u;
        // 0x2f90a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90a0) {
            ctx->pc = 0x2F90D4u;
            goto label_2f90d4;
        }
    }
    ctx->pc = 0x2F90A8u;
label_2f90a8:
    // 0x2f90a8: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x2f90a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_2f90ac:
    // 0x2f90ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f90acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f90b0:
    // 0x2f90b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f90b4:
    if (ctx->pc == 0x2F90B4u) {
        ctx->pc = 0x2F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90B0u;
        // 0x2f90b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90B8u;
        goto label_2f90b8;
    }
    ctx->pc = 0x2F90B0u;
    {
        const bool branch_taken_0x2f90b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f90b0) {
            ctx->pc = 0x2F90B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F90B0u;
            // 0x2f90b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F90C4u;
            goto label_2f90c4;
        }
    }
    ctx->pc = 0x2F90B8u;
label_2f90b8:
    // 0x2f90b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f90bc:
    // 0x2f90bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2f90c0:
    // 0x2f90c0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2f90c4:
    // 0x2f90c4: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2f90c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2f90c8:
    // 0x2f90c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f90cc:
    // 0x2f90cc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f90d0:
    // 0x2f90d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f90d4:
    // 0x2f90d4: 0xc0a3658  jal         func_28D960
label_2f90d8:
    if (ctx->pc == 0x2F90D8u) {
        ctx->pc = 0x2F90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90D4u;
        // 0x2f90d8: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90DCu;
        goto label_2f90dc;
    }
    ctx->pc = 0x2F90D4u;
    SET_GPR_U32(ctx, 31, 0x2F90DCu);
    ctx->pc = 0x2F90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90D4u;
    // 0x2f90d8: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2F90D4u, 0x2F90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90DCu;
label_2f90dc:
    // 0x2f90dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f90dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f90e0:
    // 0x2f90e0: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_2f90e4:
    if (ctx->pc == 0x2F90E4u) {
        ctx->pc = 0x2F90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90E0u;
        // 0x2f90e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90E8u;
        goto label_2f90e8;
    }
    ctx->pc = 0x2F90E0u;
    {
        const bool branch_taken_0x2f90e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90E0u;
        // 0x2f90e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90e0) {
            ctx->pc = 0x2F9118u;
            goto label_2f9118;
        }
    }
    ctx->pc = 0x2F90E8u;
label_2f90e8:
    // 0x2f90e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f90e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f90ec:
    // 0x2f90ec: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x2f90ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_2f90f0:
    // 0x2f90f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f90f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f90f4:
    // 0x2f90f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f90f8:
    if (ctx->pc == 0x2F90F8u) {
        ctx->pc = 0x2F90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90F4u;
        // 0x2f90f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90FCu;
        goto label_2f90fc;
    }
    ctx->pc = 0x2F90F4u;
    {
        const bool branch_taken_0x2f90f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f90f4) {
            ctx->pc = 0x2F90F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F90F4u;
            // 0x2f90f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F90FCu;
label_2f90fc:
    // 0x2f90fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f9100:
    // 0x2f9100: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f9100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2f9104:
    // 0x2f9104: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2f9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2f9108:
    // 0x2f9108: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2f9108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2f910c:
    // 0x2f910c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f9110:
    // 0x2f9110: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f9110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f9114:
    // 0x2f9114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9118:
    // 0x2f9118: 0xc0be362  jal         func_2F8D88
label_2f911c:
    if (ctx->pc == 0x2F911Cu) {
        ctx->pc = 0x2F911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9118u;
        // 0x2f911c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9120u;
        goto label_2f9120;
    }
    ctx->pc = 0x2F9118u;
    SET_GPR_U32(ctx, 31, 0x2F9120u);
    ctx->pc = 0x2F911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9118u;
    // 0x2f911c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8D88u, 0x2F9118u, 0x2F9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9120u;
label_2f9120:
    // 0x2f9120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9124:
    // 0x2f9124: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_2f9128:
    if (ctx->pc == 0x2F9128u) {
        ctx->pc = 0x2F9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9124u;
        // 0x2f9128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F912Cu;
        goto label_2f912c;
    }
    ctx->pc = 0x2F9124u;
    {
        const bool branch_taken_0x2f9124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9124u;
        // 0x2f9128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9124) {
            ctx->pc = 0x2F91BCu;
            goto label_2f91bc;
        }
    }
    ctx->pc = 0x2F912Cu;
label_2f912c:
    // 0x2f912c: 0xc104a44  jal         func_412910
label_2f9130:
    if (ctx->pc == 0x2F9130u) {
        ctx->pc = 0x2F9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F912Cu;
        // 0x2f9130: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9134u;
        goto label_2f9134;
    }
    ctx->pc = 0x2F912Cu;
    SET_GPR_U32(ctx, 31, 0x2F9134u);
    ctx->pc = 0x2F9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F912Cu;
    // 0x2f9130: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x2F912Cu, 0x2F9134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9134u;
label_2f9134:
    // 0x2f9134: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x2f9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9138:
    // 0x2f9138: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f9138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f913c:
    // 0x2f913c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f913cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f9140:
    // 0x2f9140: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f9140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f9144:
    // 0x2f9144: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f9148:
    // 0x2f9148: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f9148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f914c:
    // 0x2f914c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2f914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_2f9150:
    // 0x2f9150: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f9150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2f9154:
    // 0x2f9154: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f9154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f9158:
    // 0x2f9158: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2f9158u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2f915c:
    // 0x2f915c: 0xc0cd508  jal         func_335420
label_2f9160:
    if (ctx->pc == 0x2F9160u) {
        ctx->pc = 0x2F9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F915Cu;
        // 0x2f9160: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9164u;
        goto label_2f9164;
    }
    ctx->pc = 0x2F915Cu;
    SET_GPR_U32(ctx, 31, 0x2F9164u);
    ctx->pc = 0x2F9160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F915Cu;
    // 0x2f9160: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2F915Cu, 0x2F9164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9164u;
label_2f9164:
    // 0x2f9164: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2f9164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2f9168:
    // 0x2f9168: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f9168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f916c:
    // 0x2f916c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f916cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f9170:
    // 0x2f9170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9174:
    // 0x2f9174: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f9174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2f9178:
    // 0x2f9178: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f9178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f917c:
    // 0x2f917c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f917cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9180:
    // 0x2f9180: 0xc0a7cf2  jal         func_29F3C8
label_2f9184:
    if (ctx->pc == 0x2F9184u) {
        ctx->pc = 0x2F9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9180u;
        // 0x2f9184: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9188u;
        goto label_2f9188;
    }
    ctx->pc = 0x2F9180u;
    SET_GPR_U32(ctx, 31, 0x2F9188u);
    ctx->pc = 0x2F9184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9180u;
    // 0x2f9184: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2F9180u, 0x2F9188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9188u;
label_2f9188:
    // 0x2f9188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f9188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f918c:
    // 0x2f918c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9190:
    // 0x2f9190: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
label_2f9194:
    if (ctx->pc == 0x2F9194u) {
        ctx->pc = 0x2F9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9190u;
        // 0x2f9194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9198u;
        goto label_2f9198;
    }
    ctx->pc = 0x2F9190u;
    {
        const bool branch_taken_0x2f9190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9190u;
        // 0x2f9194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9190) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F9198u;
label_2f9198:
    // 0x2f9198: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2f9198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f919c:
    // 0x2f919c: 0xa243002a  sb          $v1, 0x2A($s2)
    ctx->pc = 0x2f919cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 3));
label_2f91a0:
    // 0x2f91a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f91a4:
    if (ctx->pc == 0x2F91A4u) {
        ctx->pc = 0x2F91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91A0u;
        // 0x2f91a4: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91A8u;
        goto label_2f91a8;
    }
    ctx->pc = 0x2F91A0u;
    {
        const bool branch_taken_0x2f91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91A0u;
        // 0x2f91a4: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91a0) {
            ctx->pc = 0x2F91BCu;
            goto label_2f91bc;
        }
    }
    ctx->pc = 0x2F91A8u;
label_2f91a8:
    // 0x2f91a8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f91a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f91ac:
    // 0x2f91ac: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f91acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f91b0:
    // 0x2f91b0: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2f91b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f91b4:
    // 0x2f91b4: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
label_2f91b8:
    if (ctx->pc == 0x2F91B8u) {
        ctx->pc = 0x2F91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91B4u;
        // 0x2f91b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91BCu;
        goto label_2f91bc;
    }
    ctx->pc = 0x2F91B4u;
    {
        const bool branch_taken_0x2f91b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91B4u;
        // 0x2f91b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91b4) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F91BCu;
label_2f91bc:
    // 0x2f91bc: 0x10000059  b           . + 4 + (0x59 << 2)
label_2f91c0:
    if (ctx->pc == 0x2F91C0u) {
        ctx->pc = 0x2F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91BCu;
        // 0x2f91c0: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91C4u;
        goto label_2f91c4;
    }
    ctx->pc = 0x2F91BCu;
    {
        const bool branch_taken_0x2f91bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91BCu;
        // 0x2f91c0: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91bc) {
            ctx->pc = 0x2F9324u;
            goto label_2f9324;
        }
    }
    ctx->pc = 0x2F91C4u;
label_2f91c4:
    // 0x2f91c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f91c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f91c8:
    // 0x2f91c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f91c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f91cc:
    // 0x2f91cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f91ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f91d0:
    // 0x2f91d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f91d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f91d4:
    // 0x2f91d4: 0xc09381e  jal         func_24E078
label_2f91d8:
    if (ctx->pc == 0x2F91D8u) {
        ctx->pc = 0x2F91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91D4u;
        // 0x2f91d8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91DCu;
        goto label_2f91dc;
    }
    ctx->pc = 0x2F91D4u;
    SET_GPR_U32(ctx, 31, 0x2F91DCu);
    ctx->pc = 0x2F91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F91D4u;
    // 0x2f91d8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2F91D4u, 0x2F91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F91DCu;
label_2f91dc:
    // 0x2f91dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f91e0:
    if (ctx->pc == 0x2F91E0u) {
        ctx->pc = 0x2F91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91DCu;
        // 0x2f91e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91E4u;
        goto label_2f91e4;
    }
    ctx->pc = 0x2F91DCu;
    {
        const bool branch_taken_0x2f91dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91DCu;
        // 0x2f91e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91dc) {
            ctx->pc = 0x2F9200u;
            goto label_2f9200;
        }
    }
    ctx->pc = 0x2F91E4u;
label_2f91e4:
    // 0x2f91e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f91e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f91e8:
    // 0x2f91e8: 0xc094ab8  jal         func_252AE0
label_2f91ec:
    if (ctx->pc == 0x2F91ECu) {
        ctx->pc = 0x2F91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91E8u;
        // 0x2f91ec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91F0u;
        goto label_2f91f0;
    }
    ctx->pc = 0x2F91E8u;
    SET_GPR_U32(ctx, 31, 0x2F91F0u);
    ctx->pc = 0x2F91ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F91E8u;
    // 0x2f91ec: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x2F91E8u, 0x2F91F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F91F0u;
label_2f91f0:
    // 0x2f91f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f91f4:
    if (ctx->pc == 0x2F91F4u) {
        ctx->pc = 0x2F91F8u;
        goto label_2f91f8;
    }
    ctx->pc = 0x2F91F0u;
    {
        const bool branch_taken_0x2f91f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f91f0) {
            ctx->pc = 0x2F9200u;
            goto label_2f9200;
        }
    }
    ctx->pc = 0x2F91F8u;
label_2f91f8:
    // 0x2f91f8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2f91fc:
    if (ctx->pc == 0x2F91FCu) {
        ctx->pc = 0x2F91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91F8u;
        // 0x2f91fc: 0xa240002a  sb          $zero, 0x2A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9200u;
        goto label_2f9200;
    }
    ctx->pc = 0x2F91F8u;
    {
        const bool branch_taken_0x2f91f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91F8u;
        // 0x2f91fc: 0xa240002a  sb          $zero, 0x2A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91f8) {
            ctx->pc = 0x2F9324u;
            goto label_2f9324;
        }
    }
    ctx->pc = 0x2F9200u;
label_2f9200:
    // 0x2f9200: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2f9200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_2f9204:
    // 0x2f9204: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2f9204u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f9208:
    // 0x2f9208: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
label_2f920c:
    if (ctx->pc == 0x2F920Cu) {
        ctx->pc = 0x2F920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9208u;
        // 0x2f920c: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9210u;
        goto label_2f9210;
    }
    ctx->pc = 0x2F9208u;
    {
        const bool branch_taken_0x2f9208 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9208u;
        // 0x2f920c: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9208) {
            ctx->pc = 0x2F92E4u;
            goto label_2f92e4;
        }
    }
    ctx->pc = 0x2F9210u;
label_2f9210:
    // 0x2f9210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9214:
    // 0x2f9214: 0xc08bfa0  jal         func_22FE80
label_2f9218:
    if (ctx->pc == 0x2F9218u) {
        ctx->pc = 0x2F9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9214u;
        // 0x2f9218: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F921Cu;
        goto label_2f921c;
    }
    ctx->pc = 0x2F9214u;
    SET_GPR_U32(ctx, 31, 0x2F921Cu);
    ctx->pc = 0x2F9218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9214u;
    // 0x2f9218: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F9214u, 0x2F921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F921Cu;
label_2f921c:
    // 0x2f921c: 0xc08a08a  jal         func_228228
label_2f9220:
    if (ctx->pc == 0x2F9220u) {
        ctx->pc = 0x2F9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F921Cu;
        // 0x2f9220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9224u;
        goto label_2f9224;
    }
    ctx->pc = 0x2F921Cu;
    SET_GPR_U32(ctx, 31, 0x2F9224u);
    ctx->pc = 0x2F9220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F921Cu;
    // 0x2f9220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2F921Cu, 0x2F9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9224u;
label_2f9224:
    // 0x2f9224: 0x5453000f  bnel        $v0, $s3, . + 4 + (0xF << 2)
label_2f9228:
    if (ctx->pc == 0x2F9228u) {
        ctx->pc = 0x2F9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9224u;
        // 0x2f9228: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F922Cu;
        goto label_2f922c;
    }
    ctx->pc = 0x2F9224u;
    {
        const bool branch_taken_0x2f9224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f9224) {
            ctx->pc = 0x2F9228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9224u;
            // 0x2f9228: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9264u;
            goto label_2f9264;
        }
    }
    ctx->pc = 0x2F922Cu;
label_2f922c:
    // 0x2f922c: 0xc0a4e54  jal         func_293950
label_2f9230:
    if (ctx->pc == 0x2F9230u) {
        ctx->pc = 0x2F9234u;
        goto label_2f9234;
    }
    ctx->pc = 0x2F922Cu;
    SET_GPR_U32(ctx, 31, 0x2F9234u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2F922Cu, 0x2F9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9234u;
label_2f9234:
    // 0x2f9234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f9234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9238:
    // 0x2f9238: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2f923c:
    if (ctx->pc == 0x2F923Cu) {
        ctx->pc = 0x2F923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9238u;
        // 0x2f923c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9240u;
        goto label_2f9240;
    }
    ctx->pc = 0x2F9238u;
    {
        const bool branch_taken_0x2f9238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9238u;
        // 0x2f923c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9238) {
            ctx->pc = 0x2F9250u;
            goto label_2f9250;
        }
    }
    ctx->pc = 0x2F9240u;
label_2f9240:
    // 0x2f9240: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f9240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9244:
    // 0x2f9244: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2f9244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2f9248:
    // 0x2f9248: 0xc0acb08  jal         func_2B2C20
label_2f924c:
    if (ctx->pc == 0x2F924Cu) {
        ctx->pc = 0x2F924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9248u;
        // 0x2f924c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9250u;
        goto label_2f9250;
    }
    ctx->pc = 0x2F9248u;
    SET_GPR_U32(ctx, 31, 0x2F9250u);
    ctx->pc = 0x2F924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9248u;
    // 0x2f924c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2F9248u, 0x2F9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9250u;
label_2f9250:
    // 0x2f9250: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f9250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9254:
    // 0x2f9254: 0xc0a35d6  jal         func_28D758
label_2f9258:
    if (ctx->pc == 0x2F9258u) {
        ctx->pc = 0x2F9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9254u;
        // 0x2f9258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F925Cu;
        goto label_2f925c;
    }
    ctx->pc = 0x2F9254u;
    SET_GPR_U32(ctx, 31, 0x2F925Cu);
    ctx->pc = 0x2F9258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9254u;
    // 0x2f9258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2F9254u, 0x2F925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F925Cu;
label_2f925c:
    // 0x2f925c: 0x10000032  b           . + 4 + (0x32 << 2)
label_2f9260:
    if (ctx->pc == 0x2F9260u) {
        ctx->pc = 0x2F9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F925Cu;
        // 0x2f9260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9264u;
        goto label_2f9264;
    }
    ctx->pc = 0x2F925Cu;
    {
        const bool branch_taken_0x2f925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F925Cu;
        // 0x2f9260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f925c) {
            ctx->pc = 0x2F9328u;
            goto label_2f9328;
        }
    }
    ctx->pc = 0x2F9264u;
label_2f9264:
    // 0x2f9264: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2f9264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9268:
    // 0x2f9268: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f9268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f926c:
    // 0x2f926c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9270:
    // 0x2f9270: 0x40f809  jalr        $v0
label_2f9274:
    if (ctx->pc == 0x2F9274u) {
        ctx->pc = 0x2F9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9270u;
        // 0x2f9274: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9278u;
        goto label_2f9278;
    }
    ctx->pc = 0x2F9270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9278u);
        ctx->pc = 0x2F9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9270u;
        // 0x2f9274: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9270u, 0x2F9278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9278u;
label_2f9278:
    // 0x2f9278: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f9278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f927c:
    // 0x2f927c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f927cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9280:
    // 0x2f9280: 0xc0a3fd6  jal         func_28FF58
label_2f9284:
    if (ctx->pc == 0x2F9284u) {
        ctx->pc = 0x2F9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9280u;
        // 0x2f9284: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9288u;
        goto label_2f9288;
    }
    ctx->pc = 0x2F9280u;
    SET_GPR_U32(ctx, 31, 0x2F9288u);
    ctx->pc = 0x2F9284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9280u;
    // 0x2f9284: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x2F9280u, 0x2F9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9288u;
label_2f9288:
    // 0x2f9288: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2f928c:
    if (ctx->pc == 0x2F928Cu) {
        ctx->pc = 0x2F9290u;
        goto label_2f9290;
    }
    ctx->pc = 0x2F9288u;
    {
        const bool branch_taken_0x2f9288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9288) {
            ctx->pc = 0x2F92ECu;
            goto label_2f92ec;
        }
    }
    ctx->pc = 0x2F9290u;
label_2f9290:
    // 0x2f9290: 0xc0a47b4  jal         func_291ED0
label_2f9294:
    if (ctx->pc == 0x2F9294u) {
        ctx->pc = 0x2F9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9290u;
        // 0x2f9294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9298u;
        goto label_2f9298;
    }
    ctx->pc = 0x2F9290u;
    SET_GPR_U32(ctx, 31, 0x2F9298u);
    ctx->pc = 0x2F9294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9290u;
    // 0x2f9294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2F9290u, 0x2F9298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9298u;
label_2f9298:
    // 0x2f9298: 0x14530014  bne         $v0, $s3, . + 4 + (0x14 << 2)
label_2f929c:
    if (ctx->pc == 0x2F929Cu) {
        ctx->pc = 0x2F92A0u;
        goto label_2f92a0;
    }
    ctx->pc = 0x2F9298u;
    {
        const bool branch_taken_0x2f9298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f9298) {
            ctx->pc = 0x2F92ECu;
            goto label_2f92ec;
        }
    }
    ctx->pc = 0x2F92A0u;
label_2f92a0:
    // 0x2f92a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f92a4:
    // 0x2f92a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f92a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f92a8:
    // 0x2f92a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f92ac:
    // 0x2f92ac: 0x40f809  jalr        $v0
label_2f92b0:
    if (ctx->pc == 0x2F92B0u) {
        ctx->pc = 0x2F92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92ACu;
        // 0x2f92b0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F92B4u;
        goto label_2f92b4;
    }
    ctx->pc = 0x2F92ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F92B4u);
        ctx->pc = 0x2F92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92ACu;
        // 0x2f92b0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F92ACu, 0x2F92B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F92B4u;
label_2f92b4:
    // 0x2f92b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f92b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f92b8:
    // 0x2f92b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f92b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f92bc:
    // 0x2f92bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f92bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f92c0:
    // 0x2f92c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f92c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f92c4:
    // 0x2f92c4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2f92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2f92c8:
    // 0x2f92c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f92c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f92cc:
    // 0x2f92cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f92ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f92d0:
    // 0x2f92d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f92d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f92d4:
    // 0x2f92d4: 0xc088178  jal         func_2205E0
label_2f92d8:
    if (ctx->pc == 0x2F92D8u) {
        ctx->pc = 0x2F92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92D4u;
        // 0x2f92d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F92DCu;
        goto label_2f92dc;
    }
    ctx->pc = 0x2F92D4u;
    SET_GPR_U32(ctx, 31, 0x2F92DCu);
    ctx->pc = 0x2F92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92D4u;
    // 0x2f92d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F92D4u, 0x2F92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92DCu;
label_2f92dc:
    // 0x2f92dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f92e0:
    if (ctx->pc == 0x2F92E0u) {
        ctx->pc = 0x2F92E4u;
        goto label_2f92e4;
    }
    ctx->pc = 0x2F92DCu;
    {
        const bool branch_taken_0x2f92dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f92dc) {
            ctx->pc = 0x2F92ECu;
            goto label_2f92ec;
        }
    }
    ctx->pc = 0x2F92E4u;
label_2f92e4:
    // 0x2f92e4: 0xc08bfbc  jal         func_22FEF0
label_2f92e8:
    if (ctx->pc == 0x2F92E8u) {
        ctx->pc = 0x2F92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92E4u;
        // 0x2f92e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F92ECu;
        goto label_2f92ec;
    }
    ctx->pc = 0x2F92E4u;
    SET_GPR_U32(ctx, 31, 0x2F92ECu);
    ctx->pc = 0x2F92E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92E4u;
    // 0x2f92e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F92E4u, 0x2F92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92ECu;
label_2f92ec:
    // 0x2f92ec: 0xc0a367c  jal         func_28D9F0
label_2f92f0:
    if (ctx->pc == 0x2F92F0u) {
        ctx->pc = 0x2F92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92ECu;
        // 0x2f92f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F92F4u;
        goto label_2f92f4;
    }
    ctx->pc = 0x2F92ECu;
    SET_GPR_U32(ctx, 31, 0x2F92F4u);
    ctx->pc = 0x2F92F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92ECu;
    // 0x2f92f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F92ECu, 0x2F92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92F4u;
label_2f92f4:
    // 0x2f92f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f92f8:
    if (ctx->pc == 0x2F92F8u) {
        ctx->pc = 0x2F92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92F4u;
        // 0x2f92f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F92FCu;
        goto label_2f92fc;
    }
    ctx->pc = 0x2F92F4u;
    {
        const bool branch_taken_0x2f92f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92F4u;
        // 0x2f92f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92f4) {
            ctx->pc = 0x2F9324u;
            goto label_2f9324;
        }
    }
    ctx->pc = 0x2F92FCu;
label_2f92fc:
    // 0x2f92fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2f92fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9300:
    // 0x2f9300: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f9300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f9304:
    // 0x2f9304: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f9308:
    // 0x2f9308: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f9308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f930c:
    // 0x2f930c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2f930cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f9310:
    // 0x2f9310: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2f9310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9314:
    // 0x2f9314: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f9314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9318:
    // 0x2f9318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f931c:
    // 0x2f931c: 0xc0bee7a  jal         func_2FB9E8
label_2f9320:
    if (ctx->pc == 0x2F9320u) {
        ctx->pc = 0x2F9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F931Cu;
        // 0x2f9320: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9324u;
        goto label_2f9324;
    }
    ctx->pc = 0x2F931Cu;
    SET_GPR_U32(ctx, 31, 0x2F9324u);
    ctx->pc = 0x2F9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F931Cu;
    // 0x2f9320: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2F931Cu, 0x2F9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9324u;
label_2f9324:
    // 0x2f9324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9328:
    // 0x2f9328: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2f9328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f932c:
    // 0x2f932c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2f932cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2f9330:
    // 0x2f9330: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2f9330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2f9334:
    // 0x2f9334: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2f9334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2f9338:
    // 0x2f9338: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2f9338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f933c:
    // 0x2f933c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2f933cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f9340:
    // 0x2f9340: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2f9340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f9344:
    // 0x2f9344: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2f9344u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f9348:
    // 0x2f9348: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f9348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f934c:
    // 0x2f934c: 0x3e00008  jr          $ra
label_2f9350:
    if (ctx->pc == 0x2F9350u) {
        ctx->pc = 0x2F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F934Cu;
        // 0x2f9350: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9354u;
        goto label_2f9354;
    }
    ctx->pc = 0x2F934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F934Cu;
        // 0x2f9350: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9354u;
label_2f9354:
    // 0x2f9354: 0x0  nop
    ctx->pc = 0x2f9354u;
    // NOP
    ctx->pc = 0x2f9358u;
}
