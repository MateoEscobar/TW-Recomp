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

// Function: sub_001A2F68
// Address: 0x1a2f68 - 0x1a32f0
void sub_001A2F68_0x1a2f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2F68_0x1a2f68");
#endif

    switch (ctx->pc) {
        case 0x1a2f68u: goto label_1a2f68;
        case 0x1a2f6cu: goto label_1a2f6c;
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a2f74u: goto label_1a2f74;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f7cu: goto label_1a2f7c;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2f84u: goto label_1a2f84;
        case 0x1a2f88u: goto label_1a2f88;
        case 0x1a2f8cu: goto label_1a2f8c;
        case 0x1a2f90u: goto label_1a2f90;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2f98u: goto label_1a2f98;
        case 0x1a2f9cu: goto label_1a2f9c;
        case 0x1a2fa0u: goto label_1a2fa0;
        case 0x1a2fa4u: goto label_1a2fa4;
        case 0x1a2fa8u: goto label_1a2fa8;
        case 0x1a2facu: goto label_1a2fac;
        case 0x1a2fb0u: goto label_1a2fb0;
        case 0x1a2fb4u: goto label_1a2fb4;
        case 0x1a2fb8u: goto label_1a2fb8;
        case 0x1a2fbcu: goto label_1a2fbc;
        case 0x1a2fc0u: goto label_1a2fc0;
        case 0x1a2fc4u: goto label_1a2fc4;
        case 0x1a2fc8u: goto label_1a2fc8;
        case 0x1a2fccu: goto label_1a2fcc;
        case 0x1a2fd0u: goto label_1a2fd0;
        case 0x1a2fd4u: goto label_1a2fd4;
        case 0x1a2fd8u: goto label_1a2fd8;
        case 0x1a2fdcu: goto label_1a2fdc;
        case 0x1a2fe0u: goto label_1a2fe0;
        case 0x1a2fe4u: goto label_1a2fe4;
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2fecu: goto label_1a2fec;
        case 0x1a2ff0u: goto label_1a2ff0;
        case 0x1a2ff4u: goto label_1a2ff4;
        case 0x1a2ff8u: goto label_1a2ff8;
        case 0x1a2ffcu: goto label_1a2ffc;
        case 0x1a3000u: goto label_1a3000;
        case 0x1a3004u: goto label_1a3004;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3014u: goto label_1a3014;
        case 0x1a3018u: goto label_1a3018;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3020u: goto label_1a3020;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3028u: goto label_1a3028;
        case 0x1a302cu: goto label_1a302c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a3034u: goto label_1a3034;
        case 0x1a3038u: goto label_1a3038;
        case 0x1a303cu: goto label_1a303c;
        case 0x1a3040u: goto label_1a3040;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a3048u: goto label_1a3048;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a3050u: goto label_1a3050;
        case 0x1a3054u: goto label_1a3054;
        case 0x1a3058u: goto label_1a3058;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3060u: goto label_1a3060;
        case 0x1a3064u: goto label_1a3064;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a306cu: goto label_1a306c;
        case 0x1a3070u: goto label_1a3070;
        case 0x1a3074u: goto label_1a3074;
        case 0x1a3078u: goto label_1a3078;
        case 0x1a307cu: goto label_1a307c;
        case 0x1a3080u: goto label_1a3080;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a3088u: goto label_1a3088;
        case 0x1a308cu: goto label_1a308c;
        case 0x1a3090u: goto label_1a3090;
        case 0x1a3094u: goto label_1a3094;
        case 0x1a3098u: goto label_1a3098;
        case 0x1a309cu: goto label_1a309c;
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30a4u: goto label_1a30a4;
        case 0x1a30a8u: goto label_1a30a8;
        case 0x1a30acu: goto label_1a30ac;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30b4u: goto label_1a30b4;
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30bcu: goto label_1a30bc;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30c4u: goto label_1a30c4;
        case 0x1a30c8u: goto label_1a30c8;
        case 0x1a30ccu: goto label_1a30cc;
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30dcu: goto label_1a30dc;
        case 0x1a30e0u: goto label_1a30e0;
        case 0x1a30e4u: goto label_1a30e4;
        case 0x1a30e8u: goto label_1a30e8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a30f0u: goto label_1a30f0;
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a30fcu: goto label_1a30fc;
        case 0x1a3100u: goto label_1a3100;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3110u: goto label_1a3110;
        case 0x1a3114u: goto label_1a3114;
        case 0x1a3118u: goto label_1a3118;
        case 0x1a311cu: goto label_1a311c;
        case 0x1a3120u: goto label_1a3120;
        case 0x1a3124u: goto label_1a3124;
        case 0x1a3128u: goto label_1a3128;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a3134u: goto label_1a3134;
        case 0x1a3138u: goto label_1a3138;
        case 0x1a313cu: goto label_1a313c;
        case 0x1a3140u: goto label_1a3140;
        case 0x1a3144u: goto label_1a3144;
        case 0x1a3148u: goto label_1a3148;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a3150u: goto label_1a3150;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3158u: goto label_1a3158;
        case 0x1a315cu: goto label_1a315c;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a3164u: goto label_1a3164;
        case 0x1a3168u: goto label_1a3168;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a3170u: goto label_1a3170;
        case 0x1a3174u: goto label_1a3174;
        case 0x1a3178u: goto label_1a3178;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3180u: goto label_1a3180;
        case 0x1a3184u: goto label_1a3184;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a3190u: goto label_1a3190;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a3198u: goto label_1a3198;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31a0u: goto label_1a31a0;
        case 0x1a31a4u: goto label_1a31a4;
        case 0x1a31a8u: goto label_1a31a8;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b0u: goto label_1a31b0;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31c4u: goto label_1a31c4;
        case 0x1a31c8u: goto label_1a31c8;
        case 0x1a31ccu: goto label_1a31cc;
        case 0x1a31d0u: goto label_1a31d0;
        case 0x1a31d4u: goto label_1a31d4;
        case 0x1a31d8u: goto label_1a31d8;
        case 0x1a31dcu: goto label_1a31dc;
        case 0x1a31e0u: goto label_1a31e0;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31e8u: goto label_1a31e8;
        case 0x1a31ecu: goto label_1a31ec;
        case 0x1a31f0u: goto label_1a31f0;
        case 0x1a31f4u: goto label_1a31f4;
        case 0x1a31f8u: goto label_1a31f8;
        case 0x1a31fcu: goto label_1a31fc;
        case 0x1a3200u: goto label_1a3200;
        case 0x1a3204u: goto label_1a3204;
        case 0x1a3208u: goto label_1a3208;
        case 0x1a320cu: goto label_1a320c;
        case 0x1a3210u: goto label_1a3210;
        case 0x1a3214u: goto label_1a3214;
        case 0x1a3218u: goto label_1a3218;
        case 0x1a321cu: goto label_1a321c;
        case 0x1a3220u: goto label_1a3220;
        case 0x1a3224u: goto label_1a3224;
        case 0x1a3228u: goto label_1a3228;
        case 0x1a322cu: goto label_1a322c;
        case 0x1a3230u: goto label_1a3230;
        case 0x1a3234u: goto label_1a3234;
        case 0x1a3238u: goto label_1a3238;
        case 0x1a323cu: goto label_1a323c;
        case 0x1a3240u: goto label_1a3240;
        case 0x1a3244u: goto label_1a3244;
        case 0x1a3248u: goto label_1a3248;
        case 0x1a324cu: goto label_1a324c;
        case 0x1a3250u: goto label_1a3250;
        case 0x1a3254u: goto label_1a3254;
        case 0x1a3258u: goto label_1a3258;
        case 0x1a325cu: goto label_1a325c;
        case 0x1a3260u: goto label_1a3260;
        case 0x1a3264u: goto label_1a3264;
        case 0x1a3268u: goto label_1a3268;
        case 0x1a326cu: goto label_1a326c;
        case 0x1a3270u: goto label_1a3270;
        case 0x1a3274u: goto label_1a3274;
        case 0x1a3278u: goto label_1a3278;
        case 0x1a327cu: goto label_1a327c;
        case 0x1a3280u: goto label_1a3280;
        case 0x1a3284u: goto label_1a3284;
        case 0x1a3288u: goto label_1a3288;
        case 0x1a328cu: goto label_1a328c;
        case 0x1a3290u: goto label_1a3290;
        case 0x1a3294u: goto label_1a3294;
        case 0x1a3298u: goto label_1a3298;
        case 0x1a329cu: goto label_1a329c;
        case 0x1a32a0u: goto label_1a32a0;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32a8u: goto label_1a32a8;
        case 0x1a32acu: goto label_1a32ac;
        case 0x1a32b0u: goto label_1a32b0;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32b8u: goto label_1a32b8;
        case 0x1a32bcu: goto label_1a32bc;
        case 0x1a32c0u: goto label_1a32c0;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32c8u: goto label_1a32c8;
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a32d0u: goto label_1a32d0;
        case 0x1a32d4u: goto label_1a32d4;
        case 0x1a32d8u: goto label_1a32d8;
        case 0x1a32dcu: goto label_1a32dc;
        case 0x1a32e0u: goto label_1a32e0;
        case 0x1a32e4u: goto label_1a32e4;
        case 0x1a32e8u: goto label_1a32e8;
        case 0x1a32ecu: goto label_1a32ec;
        default: break;
    }

    ctx->pc = 0x1a2f68u;

label_1a2f68:
    // 0x1a2f68: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1a2f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_1a2f6c:
    // 0x1a2f6c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2f70:
    // 0x1a2f70: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1a2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_1a2f74:
    // 0x1a2f74: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a2f78:
    // 0x1a2f78: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1a2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_1a2f7c:
    // 0x1a2f7c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1a2f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1a2f80:
    // 0x1a2f80: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1a2f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_1a2f84:
    // 0x1a2f84: 0x2631d050  addiu       $s1, $s1, -0x2FB0
    ctx->pc = 0x1a2f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955088));
label_1a2f88:
    // 0x1a2f88: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1a2f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_1a2f8c:
    // 0x1a2f8c: 0x581c0  sll         $s0, $a1, 7
    ctx->pc = 0x1a2f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_1a2f90:
    // 0x1a2f90: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1a2f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_1a2f94:
    // 0x1a2f94: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1a2f98:
    // 0x1a2f98: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x1a2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
label_1a2f9c:
    // 0x1a2f9c: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1a2f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a2fa0:
    // 0x1a2fa0: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x1a2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
label_1a2fa4:
    // 0x1a2fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a2fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2fa8:
    // 0x1a2fa8: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x1a2fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1a2fac:
    // 0x1a2fac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1a2facu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fb0:
    // 0x1a2fb0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1a2fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_1a2fb4:
    // 0x1a2fb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a2fb8:
    // 0x1a2fb8: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x1a2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_1a2fbc:
    // 0x1a2fbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a2fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2fc0:
    // 0x1a2fc0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1a2fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_1a2fc4:
    // 0x1a2fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a2fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fc8:
    // 0x1a2fc8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a2fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a2fcc:
    // 0x1a2fcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a2fccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fd0:
    // 0x1a2fd0: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x1a2fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2fd4:
    // 0x1a2fd4: 0xafc50040  sw          $a1, 0x40($fp)
    ctx->pc = 0x1a2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 5));
label_1a2fd8:
    // 0x1a2fd8: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1a2fdc:
    // 0x1a2fdc: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1a2fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1a2fe0:
    // 0x1a2fe0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a2fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a2fe4:
    // 0x1a2fe4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1a2fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2fe8:
    // 0x1a2fe8: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1a2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
label_1a2fec:
    // 0x1a2fec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1a2fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1a2ff0:
    // 0x1a2ff0: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x1a2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_1a2ff4:
    // 0x1a2ff4: 0xa3b200c0  sb          $s2, 0xC0($sp)
    ctx->pc = 0x1a2ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 18));
label_1a2ff8:
    // 0x1a2ff8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a2ffc:
    // 0x1a2ffc: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1a2ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1a3000:
    // 0x1a3000: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1a3000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a3004:
    // 0x1a3004: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a3004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a3008:
    // 0x1a3008: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1a3008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a300c:
    // 0x1a300c: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x1a300cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1a3010:
    // 0x1a3010: 0xa06a0003  sb          $t2, 0x3($v1)
    ctx->pc = 0x1a3010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
label_1a3014:
    // 0x1a3014: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x1a3014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_1a3018:
    // 0x1a3018: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1a3018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a301c:
    // 0x1a301c: 0xa0720002  sb          $s2, 0x2($v1)
    ctx->pc = 0x1a301cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 18));
label_1a3020:
    // 0x1a3020: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x1a3020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3024:
    // 0x1a3024: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x1a3024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1a3028:
    // 0x1a3028: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a3028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1a302c:
    // 0x1a302c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a3030:
    // 0x1a3030: 0xc06876e  jal         func_1A1DB8
label_1a3034:
    if (ctx->pc == 0x1A3034u) {
        ctx->pc = 0x1A3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3030u;
        // 0x1a3034: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3038u;
        goto label_1a3038;
    }
    ctx->pc = 0x1A3030u;
    SET_GPR_U32(ctx, 31, 0x1A3038u);
    ctx->pc = 0x1A3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3030u;
    // 0x1a3034: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A3030u, 0x1A3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3038u;
label_1a3038:
    // 0x1a3038: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x1a3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_1a303c:
    // 0x1a303c: 0x27a300c4  addiu       $v1, $sp, 0xC4
    ctx->pc = 0x1a303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1a3040:
    // 0x1a3040: 0x8fc401b8  lw          $a0, 0x1B8($fp)
    ctx->pc = 0x1a3040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 440)));
label_1a3044:
    // 0x1a3044: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a3044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3048:
    // 0x1a3048: 0xa3b200c4  sb          $s2, 0xC4($sp)
    ctx->pc = 0x1a3048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 18));
label_1a304c:
    // 0x1a304c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a304cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a3050:
    // 0x1a3050: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1a3050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1a3054:
    // 0x1a3054: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1a3054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a3058:
    // 0x1a3058: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a305c:
    // 0x1a305c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_1a3060:
    // 0x1a3060: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1a3060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1a3064:
    // 0x1a3064: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a3064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3068:
    // 0x1a3068: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x1a3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a306c:
    // 0x1a306c: 0x34e70050  ori         $a3, $a3, 0x50
    ctx->pc = 0x1a306cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
label_1a3070:
    // 0x1a3070: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1a3070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1a3074:
    // 0x1a3074: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1a3074u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1a3078:
    // 0x1a3078: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1a3078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_1a307c:
    // 0x1a307c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a307cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3080:
    // 0x1a3080: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1a3080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1a3084:
    // 0x1a3084: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a3084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3088:
    // 0x1a3088: 0xa0720002  sb          $s2, 0x2($v1)
    ctx->pc = 0x1a3088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 18));
label_1a308c:
    // 0x1a308c: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x1a308cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_1a3090:
    // 0x1a3090: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x1a3090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1a3094:
    // 0x1a3094: 0xc0683f4  jal         func_1A0FD0
label_1a3098:
    if (ctx->pc == 0x1A3098u) {
        ctx->pc = 0x1A3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3094u;
        // 0x1a3098: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A309Cu;
        goto label_1a309c;
    }
    ctx->pc = 0x1A3094u;
    SET_GPR_U32(ctx, 31, 0x1A309Cu);
    ctx->pc = 0x1A3098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3094u;
    // 0x1a3098: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1A3094u, 0x1A309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A309Cu;
label_1a309c:
    // 0x1a309c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1a309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a30a0:
    // 0x1a30a0: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x1a30a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1a30a4:
    // 0x1a30a4: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x1a30a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1a30a8:
    // 0x1a30a8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x1a30a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1a30ac:
    // 0x1a30ac: 0x27b400d4  addiu       $s4, $sp, 0xD4
    ctx->pc = 0x1a30acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1a30b0:
    // 0x1a30b0: 0x27c40150  addiu       $a0, $fp, 0x150
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
label_1a30b4:
    // 0x1a30b4: 0x7aa80000  lq          $t0, 0x0($s5)
    ctx->pc = 0x1a30b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1a30b8:
    // 0x1a30b8: 0x7aa90010  lq          $t1, 0x10($s5)
    ctx->pc = 0x1a30b8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_1a30bc:
    // 0x1a30bc: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x1a30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
label_1a30c0:
    // 0x1a30c0: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1a30c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
label_1a30c4:
    // 0x1a30c4: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1a30c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1a30c8:
    // 0x1a30c8: 0x16a2fffa  bne         $s5, $v0, . + 4 + (-0x6 << 2)
label_1a30cc:
    if (ctx->pc == 0x1A30CCu) {
        ctx->pc = 0x1A30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C8u;
        // 0x1a30cc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30D0u;
        goto label_1a30d0;
    }
    ctx->pc = 0x1A30C8u;
    {
        const bool branch_taken_0x1a30c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C8u;
        // 0x1a30cc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30c8) {
            ctx->pc = 0x1A30B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a30b4;
        }
    }
    ctx->pc = 0x1A30D0u;
label_1a30d0:
    // 0x1a30d0: 0x7aa50000  lq          $a1, 0x0($s5)
    ctx->pc = 0x1a30d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1a30d4:
    // 0x1a30d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1a30d8:
    // 0x1a30d8: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1a30d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_1a30dc:
    // 0x1a30dc: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_1a30e0:
    // 0x1a30e0: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_1a30e4:
    // 0x1a30e4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1a30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1a30e8:
    // 0x1a30e8: 0xa3a300c8  sb          $v1, 0xC8($sp)
    ctx->pc = 0x1a30e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 3));
label_1a30ec:
    // 0x1a30ec: 0x240400ba  addiu       $a0, $zero, 0xBA
    ctx->pc = 0x1a30ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1a30f0:
    // 0x1a30f0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a30f4:
    // 0x1a30f4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1a30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1a30f8:
    // 0x1a30f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a30fc:
    // 0x1a30fc: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x1a30fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a3100:
    // 0x1a3100: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1a3100u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
label_1a3104:
    // 0x1a3104: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1a3104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a3108:
    // 0x1a3108: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1a3108u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_1a310c:
    // 0x1a310c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1a310cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1a3110:
    // 0x1a3110: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x1a3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_1a3114:
    // 0x1a3114: 0x2631d090  addiu       $s1, $s1, -0x2F70
    ctx->pc = 0x1a3114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955152));
label_1a3118:
    // 0x1a3118: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1a3118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1a311c:
    // 0x1a311c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3120:
    // 0x1a3120: 0xafc501b8  sw          $a1, 0x1B8($fp)
    ctx->pc = 0x1a3120u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 440), GPR_U32(ctx, 5));
label_1a3124:
    // 0x1a3124: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a3124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a3128:
    // 0x1a3128: 0xafc30178  sw          $v1, 0x178($fp)
    ctx->pc = 0x1a3128u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 3));
label_1a312c:
    // 0x1a312c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a3130:
    // 0x1a3130: 0xa3b000cc  sb          $s0, 0xCC($sp)
    ctx->pc = 0x1a3130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 16));
label_1a3134:
    // 0x1a3134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3138:
    // 0x1a3138: 0x27d501c0  addiu       $s5, $fp, 0x1C0
    ctx->pc = 0x1a3138u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 448));
label_1a313c:
    // 0x1a313c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a313cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a3140:
    // 0x1a3140: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a3140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3144:
    // 0x1a3144: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3148:
    // 0x1a3148: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a3148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a314c:
    // 0x1a314c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3150:
    // 0x1a3150: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1a3150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1a3154:
    // 0x1a3154: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a3154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3158:
    // 0x1a3158: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x1a3158u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
label_1a315c:
    // 0x1a315c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3160:
    // 0x1a3160: 0xa0f00001  sb          $s0, 0x1($a3)
    ctx->pc = 0x1a3160u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 16));
label_1a3164:
    // 0x1a3164: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a3164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3168:
    // 0x1a3168: 0xa0f00002  sb          $s0, 0x2($a3)
    ctx->pc = 0x1a3168u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 16));
label_1a316c:
    // 0x1a316c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3170:
    // 0x1a3170: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x1a3170u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_1a3174:
    // 0x1a3174: 0x27d60290  addiu       $s6, $fp, 0x290
    ctx->pc = 0x1a3174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 656));
label_1a3178:
    // 0x1a3178: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x1a3178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1a317c:
    // 0x1a317c: 0x26523e68  addiu       $s2, $s2, 0x3E68
    ctx->pc = 0x1a317cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15976));
label_1a3180:
    // 0x1a3180: 0xc073418  jal         func_1CD060
label_1a3184:
    if (ctx->pc == 0x1A3184u) {
        ctx->pc = 0x1A3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3180u;
        // 0x1a3184: 0x27d30360  addiu       $s3, $fp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3188u;
        goto label_1a3188;
    }
    ctx->pc = 0x1A3180u;
    SET_GPR_U32(ctx, 31, 0x1A3188u);
    ctx->pc = 0x1A3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3180u;
    // 0x1a3184: 0x27d30360  addiu       $s3, $fp, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1A3180u, 0x1A3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a318c:
    // 0x1a318c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a318cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3190:
    // 0x1a3190: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x1a3190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1a3194:
    // 0x1a3194: 0xc10ca04  jal         func_432810
label_1a3198:
    if (ctx->pc == 0x1A3198u) {
        ctx->pc = 0x1A3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3194u;
        // 0x1a3198: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A319Cu;
        goto label_1a319c;
    }
    ctx->pc = 0x1A3194u;
    SET_GPR_U32(ctx, 31, 0x1A319Cu);
    ctx->pc = 0x1A3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3194u;
    // 0x1a3198: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1A3194u, 0x1A319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A319Cu;
label_1a319c:
    // 0x1a319c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a31a0:
    // 0x1a31a0: 0xc073478  jal         func_1CD1E0
label_1a31a4:
    if (ctx->pc == 0x1A31A4u) {
        ctx->pc = 0x1A31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A0u;
        // 0x1a31a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31A8u;
        goto label_1a31a8;
    }
    ctx->pc = 0x1A31A0u;
    SET_GPR_U32(ctx, 31, 0x1A31A8u);
    ctx->pc = 0x1A31A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31A0u;
    // 0x1a31a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A31A0u, 0x1A31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31A8u;
label_1a31a8:
    // 0x1a31a8: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x1a31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_1a31ac:
    // 0x1a31ac: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a31b0:
    // 0x1a31b0: 0xa3b000d0  sb          $s0, 0xD0($sp)
    ctx->pc = 0x1a31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 16));
label_1a31b4:
    // 0x1a31b4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a31b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a31b8:
    // 0x1a31b8: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x1a31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
label_1a31bc:
    // 0x1a31bc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a31c0:
    // 0x1a31c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a31c4:
    // 0x1a31c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a31c8:
    // 0x1a31c8: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1a31c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1a31cc:
    // 0x1a31cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a31ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a31d0:
    // 0x1a31d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a31d4:
    // 0x1a31d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a31d8:
    // 0x1a31d8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1a31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1a31dc:
    // 0x1a31dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a31dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a31e0:
    // 0x1a31e0: 0xa2e20003  sb          $v0, 0x3($s7)
    ctx->pc = 0x1a31e0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
label_1a31e4:
    // 0x1a31e4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a31e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a31e8:
    // 0x1a31e8: 0xa2f00001  sb          $s0, 0x1($s7)
    ctx->pc = 0x1a31e8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 16));
label_1a31ec:
    // 0x1a31ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a31f0:
    // 0x1a31f0: 0xa2f00002  sb          $s0, 0x2($s7)
    ctx->pc = 0x1a31f0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 16));
label_1a31f4:
    // 0x1a31f4: 0xc073418  jal         func_1CD060
label_1a31f8:
    if (ctx->pc == 0x1A31F8u) {
        ctx->pc = 0x1A31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31F4u;
        // 0x1a31f8: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31FCu;
        goto label_1a31fc;
    }
    ctx->pc = 0x1A31F4u;
    SET_GPR_U32(ctx, 31, 0x1A31FCu);
    ctx->pc = 0x1A31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31F4u;
    // 0x1a31f8: 0x8fa700d0  lw          $a3, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1A31F4u, 0x1A31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31FCu;
label_1a31fc:
    // 0x1a31fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a3200:
    // 0x1a3200: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3204:
    // 0x1a3204: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x1a3204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1a3208:
    // 0x1a3208: 0xc10ca04  jal         func_432810
label_1a320c:
    if (ctx->pc == 0x1A320Cu) {
        ctx->pc = 0x1A320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3208u;
        // 0x1a320c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3210u;
        goto label_1a3210;
    }
    ctx->pc = 0x1A3208u;
    SET_GPR_U32(ctx, 31, 0x1A3210u);
    ctx->pc = 0x1A320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3208u;
    // 0x1a320c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1A3208u, 0x1A3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3210u;
label_1a3210:
    // 0x1a3210: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a3214:
    // 0x1a3214: 0xc073478  jal         func_1CD1E0
label_1a3218:
    if (ctx->pc == 0x1A3218u) {
        ctx->pc = 0x1A3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3214u;
        // 0x1a3218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A321Cu;
        goto label_1a321c;
    }
    ctx->pc = 0x1A3214u;
    SET_GPR_U32(ctx, 31, 0x1A321Cu);
    ctx->pc = 0x1A3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3214u;
    // 0x1a3218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A3214u, 0x1A321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A321Cu;
label_1a321c:
    // 0x1a321c: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x1a321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_1a3220:
    // 0x1a3220: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a3220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3224:
    // 0x1a3224: 0xa3b000d4  sb          $s0, 0xD4($sp)
    ctx->pc = 0x1a3224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 212), (uint8_t)GPR_U32(ctx, 16));
label_1a3228:
    // 0x1a3228: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a322c:
    // 0x1a322c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a3230:
    // 0x1a3230: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a3230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a3234:
    // 0x1a3234: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1a3234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a3238:
    // 0x1a3238: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a3238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a323c:
    // 0x1a323c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1a323cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1a3240:
    // 0x1a3240: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a3240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3244:
    // 0x1a3244: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a3244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3248:
    // 0x1a3248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a3248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a324c:
    // 0x1a324c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1a324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1a3250:
    // 0x1a3250: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a3250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3254:
    // 0x1a3254: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3258:
    // 0x1a3258: 0xa2900002  sb          $s0, 0x2($s4)
    ctx->pc = 0x1a3258u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 16));
label_1a325c:
    // 0x1a325c: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x1a325cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
label_1a3260:
    // 0x1a3260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3264:
    // 0x1a3264: 0xa2900001  sb          $s0, 0x1($s4)
    ctx->pc = 0x1a3264u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 16));
label_1a3268:
    // 0x1a3268: 0xc073418  jal         func_1CD060
label_1a326c:
    if (ctx->pc == 0x1A326Cu) {
        ctx->pc = 0x1A326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3268u;
        // 0x1a326c: 0x8fa700d4  lw          $a3, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3270u;
        goto label_1a3270;
    }
    ctx->pc = 0x1A3268u;
    SET_GPR_U32(ctx, 31, 0x1A3270u);
    ctx->pc = 0x1A326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3268u;
    // 0x1a326c: 0x8fa700d4  lw          $a3, 0xD4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1A3268u, 0x1A3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3270u;
label_1a3270:
    // 0x1a3270: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a3270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a3274:
    // 0x1a3274: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3278:
    // 0x1a3278: 0x2407009c  addiu       $a3, $zero, 0x9C
    ctx->pc = 0x1a3278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1a327c:
    // 0x1a327c: 0xc10ca04  jal         func_432810
label_1a3280:
    if (ctx->pc == 0x1A3280u) {
        ctx->pc = 0x1A3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A327Cu;
        // 0x1a3280: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3284u;
        goto label_1a3284;
    }
    ctx->pc = 0x1A327Cu;
    SET_GPR_U32(ctx, 31, 0x1A3284u);
    ctx->pc = 0x1A3280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A327Cu;
    // 0x1a3280: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1A327Cu, 0x1A3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3284u;
label_1a3284:
    // 0x1a3284: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a3284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a3288:
    // 0x1a3288: 0xc073478  jal         func_1CD1E0
label_1a328c:
    if (ctx->pc == 0x1A328Cu) {
        ctx->pc = 0x1A328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3288u;
        // 0x1a328c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3290u;
        goto label_1a3290;
    }
    ctx->pc = 0x1A3288u;
    SET_GPR_U32(ctx, 31, 0x1A3290u);
    ctx->pc = 0x1A328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3288u;
    // 0x1a328c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1A3288u, 0x1A3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3290u;
label_1a3290:
    // 0x1a3290: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a3294:
    // 0x1a3294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3298:
    // 0x1a3298: 0xc068cc4  jal         func_1A3310
label_1a329c:
    if (ctx->pc == 0x1A329Cu) {
        ctx->pc = 0x1A329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3298u;
        // 0x1a329c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32A0u;
        goto label_1a32a0;
    }
    ctx->pc = 0x1A3298u;
    SET_GPR_U32(ctx, 31, 0x1A32A0u);
    ctx->pc = 0x1A329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3298u;
    // 0x1a329c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3310u, 0x1A3298u, 0x1A32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32A0u;
label_1a32a0:
    // 0x1a32a0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1a32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1a32a4:
    // 0x1a32a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a32a8:
    // 0x1a32a8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a32a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a32ac:
    // 0x1a32ac: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a32b0:
    // 0x1a32b0: 0x60f809  jalr        $v1
label_1a32b4:
    if (ctx->pc == 0x1A32B4u) {
        ctx->pc = 0x1A32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B0u;
        // 0x1a32b4: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32B8u;
        goto label_1a32b8;
    }
    ctx->pc = 0x1A32B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A32B8u);
        ctx->pc = 0x1A32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B0u;
        // 0x1a32b4: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A32B0u, 0x1A32B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A32B8u;
label_1a32b8:
    // 0x1a32b8: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1a32b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1a32bc:
    // 0x1a32bc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1a32bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1a32c0:
    // 0x1a32c0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1a32c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1a32c4:
    // 0x1a32c4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1a32c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1a32c8:
    // 0x1a32c8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1a32c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1a32cc:
    // 0x1a32cc: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x1a32ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1a32d0:
    // 0x1a32d0: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x1a32d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a32d4:
    // 0x1a32d4: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x1a32d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a32d8:
    // 0x1a32d8: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x1a32d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a32dc:
    // 0x1a32dc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1a32dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1a32e0:
    // 0x1a32e0: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x1a32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a32e4:
    // 0x1a32e4: 0x3e00008  jr          $ra
label_1a32e8:
    if (ctx->pc == 0x1A32E8u) {
        ctx->pc = 0x1A32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E4u;
        // 0x1a32e8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32ECu;
        goto label_1a32ec;
    }
    ctx->pc = 0x1A32E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E4u;
        // 0x1a32e8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A32E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A32ECu;
label_1a32ec:
    // 0x1a32ec: 0x0  nop
    ctx->pc = 0x1a32ecu;
    // NOP
    ctx->pc = 0x1a32f0u;
}
