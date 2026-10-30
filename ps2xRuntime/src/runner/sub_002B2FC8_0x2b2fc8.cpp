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

// Function: sub_002B2FC8
// Address: 0x2b2fc8 - 0x2b3360
void sub_002B2FC8_0x2b2fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2FC8_0x2b2fc8");
#endif

    switch (ctx->pc) {
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        case 0x2b3068u: goto label_2b3068;
        case 0x2b306cu: goto label_2b306c;
        case 0x2b3070u: goto label_2b3070;
        case 0x2b3074u: goto label_2b3074;
        case 0x2b3078u: goto label_2b3078;
        case 0x2b307cu: goto label_2b307c;
        case 0x2b3080u: goto label_2b3080;
        case 0x2b3084u: goto label_2b3084;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b308cu: goto label_2b308c;
        case 0x2b3090u: goto label_2b3090;
        case 0x2b3094u: goto label_2b3094;
        case 0x2b3098u: goto label_2b3098;
        case 0x2b309cu: goto label_2b309c;
        case 0x2b30a0u: goto label_2b30a0;
        case 0x2b30a4u: goto label_2b30a4;
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30acu: goto label_2b30ac;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30b4u: goto label_2b30b4;
        case 0x2b30b8u: goto label_2b30b8;
        case 0x2b30bcu: goto label_2b30bc;
        case 0x2b30c0u: goto label_2b30c0;
        case 0x2b30c4u: goto label_2b30c4;
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b30d0u: goto label_2b30d0;
        case 0x2b30d4u: goto label_2b30d4;
        case 0x2b30d8u: goto label_2b30d8;
        case 0x2b30dcu: goto label_2b30dc;
        case 0x2b30e0u: goto label_2b30e0;
        case 0x2b30e4u: goto label_2b30e4;
        case 0x2b30e8u: goto label_2b30e8;
        case 0x2b30ecu: goto label_2b30ec;
        case 0x2b30f0u: goto label_2b30f0;
        case 0x2b30f4u: goto label_2b30f4;
        case 0x2b30f8u: goto label_2b30f8;
        case 0x2b30fcu: goto label_2b30fc;
        case 0x2b3100u: goto label_2b3100;
        case 0x2b3104u: goto label_2b3104;
        case 0x2b3108u: goto label_2b3108;
        case 0x2b310cu: goto label_2b310c;
        case 0x2b3110u: goto label_2b3110;
        case 0x2b3114u: goto label_2b3114;
        case 0x2b3118u: goto label_2b3118;
        case 0x2b311cu: goto label_2b311c;
        case 0x2b3120u: goto label_2b3120;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3128u: goto label_2b3128;
        case 0x2b312cu: goto label_2b312c;
        case 0x2b3130u: goto label_2b3130;
        case 0x2b3134u: goto label_2b3134;
        case 0x2b3138u: goto label_2b3138;
        case 0x2b313cu: goto label_2b313c;
        case 0x2b3140u: goto label_2b3140;
        case 0x2b3144u: goto label_2b3144;
        case 0x2b3148u: goto label_2b3148;
        case 0x2b314cu: goto label_2b314c;
        case 0x2b3150u: goto label_2b3150;
        case 0x2b3154u: goto label_2b3154;
        case 0x2b3158u: goto label_2b3158;
        case 0x2b315cu: goto label_2b315c;
        case 0x2b3160u: goto label_2b3160;
        case 0x2b3164u: goto label_2b3164;
        case 0x2b3168u: goto label_2b3168;
        case 0x2b316cu: goto label_2b316c;
        case 0x2b3170u: goto label_2b3170;
        case 0x2b3174u: goto label_2b3174;
        case 0x2b3178u: goto label_2b3178;
        case 0x2b317cu: goto label_2b317c;
        case 0x2b3180u: goto label_2b3180;
        case 0x2b3184u: goto label_2b3184;
        case 0x2b3188u: goto label_2b3188;
        case 0x2b318cu: goto label_2b318c;
        case 0x2b3190u: goto label_2b3190;
        case 0x2b3194u: goto label_2b3194;
        case 0x2b3198u: goto label_2b3198;
        case 0x2b319cu: goto label_2b319c;
        case 0x2b31a0u: goto label_2b31a0;
        case 0x2b31a4u: goto label_2b31a4;
        case 0x2b31a8u: goto label_2b31a8;
        case 0x2b31acu: goto label_2b31ac;
        case 0x2b31b0u: goto label_2b31b0;
        case 0x2b31b4u: goto label_2b31b4;
        case 0x2b31b8u: goto label_2b31b8;
        case 0x2b31bcu: goto label_2b31bc;
        case 0x2b31c0u: goto label_2b31c0;
        case 0x2b31c4u: goto label_2b31c4;
        case 0x2b31c8u: goto label_2b31c8;
        case 0x2b31ccu: goto label_2b31cc;
        case 0x2b31d0u: goto label_2b31d0;
        case 0x2b31d4u: goto label_2b31d4;
        case 0x2b31d8u: goto label_2b31d8;
        case 0x2b31dcu: goto label_2b31dc;
        case 0x2b31e0u: goto label_2b31e0;
        case 0x2b31e4u: goto label_2b31e4;
        case 0x2b31e8u: goto label_2b31e8;
        case 0x2b31ecu: goto label_2b31ec;
        case 0x2b31f0u: goto label_2b31f0;
        case 0x2b31f4u: goto label_2b31f4;
        case 0x2b31f8u: goto label_2b31f8;
        case 0x2b31fcu: goto label_2b31fc;
        case 0x2b3200u: goto label_2b3200;
        case 0x2b3204u: goto label_2b3204;
        case 0x2b3208u: goto label_2b3208;
        case 0x2b320cu: goto label_2b320c;
        case 0x2b3210u: goto label_2b3210;
        case 0x2b3214u: goto label_2b3214;
        case 0x2b3218u: goto label_2b3218;
        case 0x2b321cu: goto label_2b321c;
        case 0x2b3220u: goto label_2b3220;
        case 0x2b3224u: goto label_2b3224;
        case 0x2b3228u: goto label_2b3228;
        case 0x2b322cu: goto label_2b322c;
        case 0x2b3230u: goto label_2b3230;
        case 0x2b3234u: goto label_2b3234;
        case 0x2b3238u: goto label_2b3238;
        case 0x2b323cu: goto label_2b323c;
        case 0x2b3240u: goto label_2b3240;
        case 0x2b3244u: goto label_2b3244;
        case 0x2b3248u: goto label_2b3248;
        case 0x2b324cu: goto label_2b324c;
        case 0x2b3250u: goto label_2b3250;
        case 0x2b3254u: goto label_2b3254;
        case 0x2b3258u: goto label_2b3258;
        case 0x2b325cu: goto label_2b325c;
        case 0x2b3260u: goto label_2b3260;
        case 0x2b3264u: goto label_2b3264;
        case 0x2b3268u: goto label_2b3268;
        case 0x2b326cu: goto label_2b326c;
        case 0x2b3270u: goto label_2b3270;
        case 0x2b3274u: goto label_2b3274;
        case 0x2b3278u: goto label_2b3278;
        case 0x2b327cu: goto label_2b327c;
        case 0x2b3280u: goto label_2b3280;
        case 0x2b3284u: goto label_2b3284;
        case 0x2b3288u: goto label_2b3288;
        case 0x2b328cu: goto label_2b328c;
        case 0x2b3290u: goto label_2b3290;
        case 0x2b3294u: goto label_2b3294;
        case 0x2b3298u: goto label_2b3298;
        case 0x2b329cu: goto label_2b329c;
        case 0x2b32a0u: goto label_2b32a0;
        case 0x2b32a4u: goto label_2b32a4;
        case 0x2b32a8u: goto label_2b32a8;
        case 0x2b32acu: goto label_2b32ac;
        case 0x2b32b0u: goto label_2b32b0;
        case 0x2b32b4u: goto label_2b32b4;
        case 0x2b32b8u: goto label_2b32b8;
        case 0x2b32bcu: goto label_2b32bc;
        case 0x2b32c0u: goto label_2b32c0;
        case 0x2b32c4u: goto label_2b32c4;
        case 0x2b32c8u: goto label_2b32c8;
        case 0x2b32ccu: goto label_2b32cc;
        case 0x2b32d0u: goto label_2b32d0;
        case 0x2b32d4u: goto label_2b32d4;
        case 0x2b32d8u: goto label_2b32d8;
        case 0x2b32dcu: goto label_2b32dc;
        case 0x2b32e0u: goto label_2b32e0;
        case 0x2b32e4u: goto label_2b32e4;
        case 0x2b32e8u: goto label_2b32e8;
        case 0x2b32ecu: goto label_2b32ec;
        case 0x2b32f0u: goto label_2b32f0;
        case 0x2b32f4u: goto label_2b32f4;
        case 0x2b32f8u: goto label_2b32f8;
        case 0x2b32fcu: goto label_2b32fc;
        case 0x2b3300u: goto label_2b3300;
        case 0x2b3304u: goto label_2b3304;
        case 0x2b3308u: goto label_2b3308;
        case 0x2b330cu: goto label_2b330c;
        case 0x2b3310u: goto label_2b3310;
        case 0x2b3314u: goto label_2b3314;
        case 0x2b3318u: goto label_2b3318;
        case 0x2b331cu: goto label_2b331c;
        case 0x2b3320u: goto label_2b3320;
        case 0x2b3324u: goto label_2b3324;
        case 0x2b3328u: goto label_2b3328;
        case 0x2b332cu: goto label_2b332c;
        case 0x2b3330u: goto label_2b3330;
        case 0x2b3334u: goto label_2b3334;
        case 0x2b3338u: goto label_2b3338;
        case 0x2b333cu: goto label_2b333c;
        case 0x2b3340u: goto label_2b3340;
        case 0x2b3344u: goto label_2b3344;
        case 0x2b3348u: goto label_2b3348;
        case 0x2b334cu: goto label_2b334c;
        case 0x2b3350u: goto label_2b3350;
        case 0x2b3354u: goto label_2b3354;
        case 0x2b3358u: goto label_2b3358;
        case 0x2b335cu: goto label_2b335c;
        default: break;
    }

    ctx->pc = 0x2b2fc8u;

label_2b2fc8:
    // 0x2b2fc8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2b2fcc:
    // 0x2b2fcc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b2fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2b2fd0:
    // 0x2b2fd0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b2fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2b2fd4:
    // 0x2b2fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fd8:
    // 0x2b2fd8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b2fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2b2fdc:
    // 0x2b2fdc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2b2fe0:
    // 0x2b2fe0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b2fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fe4:
    // 0x2b2fe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b2fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b2fe8:
    // 0x2b2fe8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b2fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2b2fec:
    // 0x2b2fec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2b2fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2b2ff0:
    // 0x2b2ff0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b2ff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ff4:
    // 0x2b2ff4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2b2ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2b2ff8:
    // 0x2b2ff8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b2ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ffc:
    // 0x2b2ffc: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b2ffcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2b3000:
    // 0x2b3000: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b3000u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3004:
    // 0x2b3004: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b3004u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2b3008:
    // 0x2b3008: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2b3008u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_2b300c:
    // 0x2b300c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2b3010:
    // 0x2b3010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b3014:
    // 0x2b3014: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b3014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2b3018:
    // 0x2b3018: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b3018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2b301c:
    // 0x2b301c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3020:
    // 0x2b3020: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2b3020u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b3024:
    // 0x2b3024: 0xc087502  jal         func_21D408
label_2b3028:
    if (ctx->pc == 0x2B3028u) {
        ctx->pc = 0x2B3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3024u;
        // 0x2b3028: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B302Cu;
        goto label_2b302c;
    }
    ctx->pc = 0x2B3024u;
    SET_GPR_U32(ctx, 31, 0x2B302Cu);
    ctx->pc = 0x2B3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3024u;
    // 0x2b3028: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B3024u, 0x2B302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B302Cu;
label_2b302c:
    // 0x2b302c: 0x24440124  addiu       $a0, $v0, 0x124
    ctx->pc = 0x2b302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
label_2b3030:
    // 0x2b3030: 0xc0e409a  jal         func_390268
label_2b3034:
    if (ctx->pc == 0x2B3034u) {
        ctx->pc = 0x2B3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3030u;
        // 0x2b3034: 0x245301a4  addiu       $s3, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3038u;
        goto label_2b3038;
    }
    ctx->pc = 0x2B3030u;
    SET_GPR_U32(ctx, 31, 0x2B3038u);
    ctx->pc = 0x2B3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3030u;
    // 0x2b3034: 0x245301a4  addiu       $s3, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B3030u, 0x2B3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3038u;
label_2b3038:
    // 0x2b3038: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b3038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b303c:
    // 0x2b303c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2b303cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2b3040:
    // 0x2b3040: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b3040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b3044:
    // 0x2b3044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b3044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3048:
    // 0x2b3048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b3048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b304c:
    // 0x2b304c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b304cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b3050:
    // 0x2b3050: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2b3050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3054:
    // 0x2b3054: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x2b3054u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b3058:
    // 0x2b3058: 0xc089018  jal         func_224060
label_2b305c:
    if (ctx->pc == 0x2B305Cu) {
        ctx->pc = 0x2B305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3058u;
        // 0x2b305c: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3060u;
        goto label_2b3060;
    }
    ctx->pc = 0x2B3058u;
    SET_GPR_U32(ctx, 31, 0x2B3060u);
    ctx->pc = 0x2B305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3058u;
    // 0x2b305c: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2B3058u, 0x2B3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3060u;
label_2b3060:
    // 0x2b3060: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b3060u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3064:
    // 0x2b3064: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
label_2b3068:
    if (ctx->pc == 0x2B3068u) {
        ctx->pc = 0x2B3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3064u;
        // 0x2b3068: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B306Cu;
        goto label_2b306c;
    }
    ctx->pc = 0x2B3064u;
    {
        const bool branch_taken_0x2b3064 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3064u;
        // 0x2b3068: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3064) {
            ctx->pc = 0x2B3094u;
            goto label_2b3094;
        }
    }
    ctx->pc = 0x2B306Cu;
label_2b306c:
    // 0x2b306c: 0xc089018  jal         func_224060
label_2b3070:
    if (ctx->pc == 0x2B3070u) {
        ctx->pc = 0x2B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B306Cu;
        // 0x2b3070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3074u;
        goto label_2b3074;
    }
    ctx->pc = 0x2B306Cu;
    SET_GPR_U32(ctx, 31, 0x2B3074u);
    ctx->pc = 0x2B3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B306Cu;
    // 0x2b3070: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2B306Cu, 0x2B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3074u;
label_2b3074:
    // 0x2b3074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3078:
    // 0x2b3078: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_2b307c:
    if (ctx->pc == 0x2B307Cu) {
        ctx->pc = 0x2B307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3078u;
        // 0x2b307c: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3080u;
        goto label_2b3080;
    }
    ctx->pc = 0x2B3078u;
    {
        const bool branch_taken_0x2b3078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3078) {
            ctx->pc = 0x2B307Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3078u;
            // 0x2b307c: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B3080u;
label_2b3080:
    // 0x2b3080: 0xc136b80  jal         func_4DAE00
label_2b3084:
    if (ctx->pc == 0x2B3084u) {
        ctx->pc = 0x2B3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3080u;
        // 0x2b3084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3088u;
        goto label_2b3088;
    }
    ctx->pc = 0x2B3080u;
    SET_GPR_U32(ctx, 31, 0x2B3088u);
    ctx->pc = 0x2B3084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3080u;
    // 0x2b3084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B3080u, 0x2B3088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3088u;
label_2b3088:
    // 0x2b3088: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b3088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b308c:
    // 0x2b308c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2b3090:
    if (ctx->pc == 0x2B3090u) {
        ctx->pc = 0x2B3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B308Cu;
        // 0x2b3090: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3094u;
        goto label_2b3094;
    }
    ctx->pc = 0x2B308Cu;
    {
        const bool branch_taken_0x2b308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B308Cu;
        // 0x2b3090: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b308c) {
            ctx->pc = 0x2B30DCu;
            goto label_2b30dc;
        }
    }
    ctx->pc = 0x2B3094u;
label_2b3094:
    // 0x2b3094: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b3098:
    if (ctx->pc == 0x2B3098u) {
        ctx->pc = 0x2B3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3094u;
        // 0x2b3098: 0x3a420008  xori        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B309Cu;
        goto label_2b309c;
    }
    ctx->pc = 0x2B3094u;
    {
        const bool branch_taken_0x2b3094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3094u;
        // 0x2b3098: 0x3a420008  xori        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3094) {
            ctx->pc = 0x2B30DCu;
            goto label_2b30dc;
        }
    }
    ctx->pc = 0x2B309Cu;
label_2b309c:
    // 0x2b309c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2b30a0:
    if (ctx->pc == 0x2B30A0u) {
        ctx->pc = 0x2B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B309Cu;
        // 0x2b30a0: 0x3a420003  xori        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30A4u;
        goto label_2b30a4;
    }
    ctx->pc = 0x2B309Cu;
    {
        const bool branch_taken_0x2b309c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B309Cu;
        // 0x2b30a0: 0x3a420003  xori        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b309c) {
            ctx->pc = 0x2B30DCu;
            goto label_2b30dc;
        }
    }
    ctx->pc = 0x2B30A4u;
label_2b30a4:
    // 0x2b30a4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2b30a8:
    if (ctx->pc == 0x2B30A8u) {
        ctx->pc = 0x2B30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30A4u;
        // 0x2b30a8: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30ACu;
        goto label_2b30ac;
    }
    ctx->pc = 0x2B30A4u;
    {
        const bool branch_taken_0x2b30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30a4) {
            ctx->pc = 0x2B30A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B30A4u;
            // 0x2b30a8: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B30ACu;
label_2b30ac:
    // 0x2b30ac: 0x5234000b  beql        $s1, $s4, . + 4 + (0xB << 2)
label_2b30b0:
    if (ctx->pc == 0x2B30B0u) {
        ctx->pc = 0x2B30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30ACu;
        // 0x2b30b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30B4u;
        goto label_2b30b4;
    }
    ctx->pc = 0x2B30ACu;
    {
        const bool branch_taken_0x2b30ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b30ac) {
            ctx->pc = 0x2B30B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B30ACu;
            // 0x2b30b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B30DCu;
            goto label_2b30dc;
        }
    }
    ctx->pc = 0x2B30B4u;
label_2b30b4:
    // 0x2b30b4: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
label_2b30b8:
    if (ctx->pc == 0x2B30B8u) {
        ctx->pc = 0x2B30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30B4u;
        // 0x2b30b8: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30BCu;
        goto label_2b30bc;
    }
    ctx->pc = 0x2B30B4u;
    {
        const bool branch_taken_0x2b30b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b30b4) {
            ctx->pc = 0x2B30B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B30B4u;
            // 0x2b30b8: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B30BCu;
label_2b30bc:
    // 0x2b30bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b30bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b30c0:
    // 0x2b30c0: 0xc137866  jal         func_4DE198
label_2b30c4:
    if (ctx->pc == 0x2B30C4u) {
        ctx->pc = 0x2B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30C0u;
        // 0x2b30c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30C8u;
        goto label_2b30c8;
    }
    ctx->pc = 0x2B30C0u;
    SET_GPR_U32(ctx, 31, 0x2B30C8u);
    ctx->pc = 0x2B30C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30C0u;
    // 0x2b30c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2B30C0u, 0x2B30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30C8u;
label_2b30c8:
    // 0x2b30c8: 0xc0e409a  jal         func_390268
label_2b30cc:
    if (ctx->pc == 0x2B30CCu) {
        ctx->pc = 0x2B30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30C8u;
        // 0x2b30cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30D0u;
        goto label_2b30d0;
    }
    ctx->pc = 0x2B30C8u;
    SET_GPR_U32(ctx, 31, 0x2B30D0u);
    ctx->pc = 0x2B30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30C8u;
    // 0x2b30cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B30C8u, 0x2B30D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30D0u;
label_2b30d0:
    // 0x2b30d0: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
label_2b30d4:
    if (ctx->pc == 0x2B30D4u) {
        ctx->pc = 0x2B30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30D0u;
        // 0x2b30d4: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30D8u;
        goto label_2b30d8;
    }
    ctx->pc = 0x2B30D0u;
    {
        const bool branch_taken_0x2b30d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b30d0) {
            ctx->pc = 0x2B30D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B30D0u;
            // 0x2b30d4: 0x8ea50040  lw          $a1, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B30D8u;
label_2b30d8:
    // 0x2b30d8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b30d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b30dc:
    // 0x2b30dc: 0x8ea50040  lw          $a1, 0x40($s5)
    ctx->pc = 0x2b30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_2b30e0:
    // 0x2b30e0: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
label_2b30e4:
    if (ctx->pc == 0x2B30E4u) {
        ctx->pc = 0x2B30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30E0u;
        // 0x2b30e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30E8u;
        goto label_2b30e8;
    }
    ctx->pc = 0x2B30E0u;
    {
        const bool branch_taken_0x2b30e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30e0) {
            ctx->pc = 0x2B30E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B30E0u;
            // 0x2b30e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3124u;
            goto label_2b3124;
        }
    }
    ctx->pc = 0x2B30E8u;
label_2b30e8:
    // 0x2b30e8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2b30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b30ec:
    // 0x2b30ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2b30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2b30f0:
    // 0x2b30f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b30f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b30f4:
    // 0x2b30f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b30f8:
    // 0x2b30f8: 0x40f809  jalr        $v0
label_2b30fc:
    if (ctx->pc == 0x2B30FCu) {
        ctx->pc = 0x2B30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30F8u;
        // 0x2b30fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3100u;
        goto label_2b3100;
    }
    ctx->pc = 0x2B30F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3100u);
        ctx->pc = 0x2B30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30F8u;
        // 0x2b30fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B30F8u, 0x2B3100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3100u;
label_2b3100:
    // 0x2b3100: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b3100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3104:
    // 0x2b3104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b3108:
    // 0x2b3108: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b310c:
    if (ctx->pc == 0x2B310Cu) {
        ctx->pc = 0x2B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3108u;
        // 0x2b310c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3110u;
        goto label_2b3110;
    }
    ctx->pc = 0x2B3108u;
    {
        const bool branch_taken_0x2b3108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3108u;
        // 0x2b310c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3108) {
            ctx->pc = 0x2B3118u;
            goto label_2b3118;
        }
    }
    ctx->pc = 0x2B3110u;
label_2b3110:
    // 0x2b3110: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2b3114:
    if (ctx->pc == 0x2B3114u) {
        ctx->pc = 0x2B3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3110u;
        // 0x2b3114: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3118u;
        goto label_2b3118;
    }
    ctx->pc = 0x2B3110u;
    {
        const bool branch_taken_0x2b3110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3110) {
            ctx->pc = 0x2B3114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3110u;
            // 0x2b3114: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3124u;
            goto label_2b3124;
        }
    }
    ctx->pc = 0x2B3118u;
label_2b3118:
    // 0x2b3118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b311c:
    // 0x2b311c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b311cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b3120:
    // 0x2b3120: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3124:
    // 0x2b3124: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x2b3124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2b3128:
    // 0x2b3128: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2b3128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2b312c:
    // 0x2b312c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2b312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2b3130:
    // 0x2b3130: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2b3130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2b3134:
    // 0x2b3134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3138:
    // 0x2b3138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b313c:
    // 0x2b313c: 0xc4420140  lwc1        $f2, 0x140($v0)
    ctx->pc = 0x2b313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3140:
    // 0x2b3140: 0x12e30004  beq         $s7, $v1, . + 4 + (0x4 << 2)
label_2b3144:
    if (ctx->pc == 0x2B3144u) {
        ctx->pc = 0x2B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3140u;
        // 0x2b3144: 0x46001542  mul.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3148u;
        goto label_2b3148;
    }
    ctx->pc = 0x2B3140u;
    {
        const bool branch_taken_0x2b3140 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3140u;
        // 0x2b3144: 0x46001542  mul.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3140) {
            ctx->pc = 0x2B3154u;
            goto label_2b3154;
        }
    }
    ctx->pc = 0x2B3148u;
label_2b3148:
    // 0x2b3148: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2b3148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b314c:
    // 0x2b314c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_2b3150:
    if (ctx->pc == 0x2B3150u) {
        ctx->pc = 0x2B3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B314Cu;
        // 0x2b3150: 0xc440013c  lwc1        $f0, 0x13C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3154u;
        goto label_2b3154;
    }
    ctx->pc = 0x2B314Cu;
    {
        const bool branch_taken_0x2b314c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b314c) {
            ctx->pc = 0x2B3150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B314Cu;
            // 0x2b3150: 0xc440013c  lwc1        $f0, 0x13C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3164u;
            goto label_2b3164;
        }
    }
    ctx->pc = 0x2B3154u;
label_2b3154:
    // 0x2b3154: 0xc086618  jal         func_219860
label_2b3158:
    if (ctx->pc == 0x2B3158u) {
        ctx->pc = 0x2B3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3154u;
        // 0x2b3158: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B315Cu;
        goto label_2b315c;
    }
    ctx->pc = 0x2B3154u;
    SET_GPR_U32(ctx, 31, 0x2B315Cu);
    ctx->pc = 0x2B3158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3154u;
    // 0x2b3158: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2B3154u, 0x2B315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B315Cu;
label_2b315c:
    // 0x2b315c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b3160:
    if (ctx->pc == 0x2B3160u) {
        ctx->pc = 0x2B3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B315Cu;
        // 0x2b3160: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3164u;
        goto label_2b3164;
    }
    ctx->pc = 0x2B315Cu;
    {
        const bool branch_taken_0x2b315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B315Cu;
        // 0x2b3160: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b315c) {
            ctx->pc = 0x2B3174u;
            goto label_2b3174;
        }
    }
    ctx->pc = 0x2B3164u;
label_2b3164:
    // 0x2b3164: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2b3168:
    // 0x2b3168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b3168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b316c:
    // 0x2b316c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b316cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2b3170:
    // 0x2b3170: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2b3170u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3174:
    // 0x2b3174: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b3174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b3178:
    // 0x2b3178: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
label_2b317c:
    if (ctx->pc == 0x2B317Cu) {
        ctx->pc = 0x2B317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3178u;
        // 0x2b317c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3180u;
        goto label_2b3180;
    }
    ctx->pc = 0x2B3178u;
    {
        const bool branch_taken_0x2b3178 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3178u;
        // 0x2b317c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3178) {
            ctx->pc = 0x2B31B8u;
            goto label_2b31b8;
        }
    }
    ctx->pc = 0x2B3180u;
label_2b3180:
    // 0x2b3180: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3184:
    // 0x2b3184: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b3188:
    // 0x2b3188: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b3188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b318c:
    // 0x2b318c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b3190:
    if (ctx->pc == 0x2B3190u) {
        ctx->pc = 0x2B3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B318Cu;
        // 0x2b3190: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3194u;
        goto label_2b3194;
    }
    ctx->pc = 0x2B318Cu;
    {
        const bool branch_taken_0x2b318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B318Cu;
        // 0x2b3190: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b318c) {
            ctx->pc = 0x2B31B4u;
            goto label_2b31b4;
        }
    }
    ctx->pc = 0x2B3194u;
label_2b3194:
    // 0x2b3194: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x2b3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3198:
    // 0x2b3198: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b3198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2b319c:
    // 0x2b319c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b31a0:
    // 0x2b31a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b31a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b31a4:
    // 0x2b31a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b31a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b31a8:
    // 0x2b31a8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2b31a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b31ac:
    // 0x2b31ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2b31acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2b31b0:
    // 0x2b31b0: 0x4602a540  add.s       $f21, $f20, $f2
    ctx->pc = 0x2b31b0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_2b31b4:
    // 0x2b31b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b31b8:
    // 0x2b31b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2b31b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b31bc:
    // 0x2b31bc: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2b31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2b31c0:
    // 0x2b31c0: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x2b31c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2b31c4:
    // 0x2b31c4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x2b31c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2b31c8:
    // 0x2b31c8: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_2b31cc:
    if (ctx->pc == 0x2B31CCu) {
        ctx->pc = 0x2B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31C8u;
        // 0x2b31cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B31D0u;
        goto label_2b31d0;
    }
    ctx->pc = 0x2B31C8u;
    {
        const bool branch_taken_0x2b31c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31C8u;
        // 0x2b31cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b31c8) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B31D0u;
label_2b31d0:
    // 0x2b31d0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2b31d4:
    // 0x2b31d4: 0x2453b880  addiu       $s3, $v0, -0x4780
    ctx->pc = 0x2b31d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2b31d8:
    // 0x2b31d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b31d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b31dc:
    // 0x2b31dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b31dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b31e0:
    // 0x2b31e0: 0xc0cd4fc  jal         func_3353F0
label_2b31e4:
    if (ctx->pc == 0x2B31E4u) {
        ctx->pc = 0x2B31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31E0u;
        // 0x2b31e4: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B31E8u;
        goto label_2b31e8;
    }
    ctx->pc = 0x2B31E0u;
    SET_GPR_U32(ctx, 31, 0x2B31E8u);
    ctx->pc = 0x2B31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B31E0u;
    // 0x2b31e4: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B31E0u, 0x2B31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31E8u;
label_2b31e8:
    // 0x2b31e8: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2b31e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_2b31ec:
    // 0x2b31ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2b31ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2b31f0:
    // 0x2b31f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b31f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b31f4:
    // 0x2b31f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b31f8:
    // 0x2b31f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b31f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b31fc:
    // 0x2b31fc: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x2b31fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3200:
    // 0x2b3200: 0x0  nop
    ctx->pc = 0x2b3200u;
    // NOP
label_2b3204:
    // 0x2b3204: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_2b3208:
    if (ctx->pc == 0x2B3208u) {
        ctx->pc = 0x2B3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3204u;
        // 0x2b3208: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B320Cu;
        goto label_2b320c;
    }
    ctx->pc = 0x2B3204u;
    {
        const bool branch_taken_0x2b3204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3204u;
        // 0x2b3208: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3204) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B320Cu;
label_2b320c:
    // 0x2b320c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3210:
    // 0x2b3210: 0xc136b80  jal         func_4DAE00
label_2b3214:
    if (ctx->pc == 0x2B3214u) {
        ctx->pc = 0x2B3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3210u;
        // 0x2b3214: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3218u;
        goto label_2b3218;
    }
    ctx->pc = 0x2B3210u;
    SET_GPR_U32(ctx, 31, 0x2B3218u);
    ctx->pc = 0x2B3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3210u;
    // 0x2b3214: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B3210u, 0x2B3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3218u;
label_2b3218:
    // 0x2b3218: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b3218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b321c:
    // 0x2b321c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2b3220:
    if (ctx->pc == 0x2B3220u) {
        ctx->pc = 0x2B3224u;
        goto label_2b3224;
    }
    ctx->pc = 0x2B321Cu;
    {
        const bool branch_taken_0x2b321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b321c) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B3224u;
label_2b3224:
    // 0x2b3224: 0x16e0002d  bnez        $s7, . + 4 + (0x2D << 2)
label_2b3228:
    if (ctx->pc == 0x2B3228u) {
        ctx->pc = 0x2B3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3224u;
        // 0x2b3228: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B322Cu;
        goto label_2b322c;
    }
    ctx->pc = 0x2B3224u;
    {
        const bool branch_taken_0x2b3224 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3224u;
        // 0x2b3228: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3224) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B322Cu;
label_2b322c:
    // 0x2b322c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_2b3230:
    if (ctx->pc == 0x2B3230u) {
        ctx->pc = 0x2B3234u;
        goto label_2b3234;
    }
    ctx->pc = 0x2B322Cu;
    {
        const bool branch_taken_0x2b322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b322c) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B3234u;
label_2b3234:
    // 0x2b3234: 0x17c00029  bnez        $fp, . + 4 + (0x29 << 2)
label_2b3238:
    if (ctx->pc == 0x2B3238u) {
        ctx->pc = 0x2B323Cu;
        goto label_2b323c;
    }
    ctx->pc = 0x2B3234u;
    {
        const bool branch_taken_0x2b3234 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3234) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B323Cu;
label_2b323c:
    // 0x2b323c: 0xc0a47b4  jal         func_291ED0
label_2b3240:
    if (ctx->pc == 0x2B3240u) {
        ctx->pc = 0x2B3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B323Cu;
        // 0x2b3240: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3244u;
        goto label_2b3244;
    }
    ctx->pc = 0x2B323Cu;
    SET_GPR_U32(ctx, 31, 0x2B3244u);
    ctx->pc = 0x2B3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B323Cu;
    // 0x2b3240: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B323Cu, 0x2B3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3244u;
label_2b3244:
    // 0x2b3244: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2b3248:
    if (ctx->pc == 0x2B3248u) {
        ctx->pc = 0x2B3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3244u;
        // 0x2b3248: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B324Cu;
        goto label_2b324c;
    }
    ctx->pc = 0x2B3244u;
    {
        const bool branch_taken_0x2b3244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3244u;
        // 0x2b3248: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3244) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B324Cu;
label_2b324c:
    // 0x2b324c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b3250:
    if (ctx->pc == 0x2B3250u) {
        ctx->pc = 0x2B3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B324Cu;
        // 0x2b3250: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3254u;
        goto label_2b3254;
    }
    ctx->pc = 0x2B324Cu;
    {
        const bool branch_taken_0x2b324c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B324Cu;
        // 0x2b3250: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b324c) {
            ctx->pc = 0x2B326Cu;
            goto label_2b326c;
        }
    }
    ctx->pc = 0x2B3254u;
label_2b3254:
    // 0x2b3254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b3258:
    // 0x2b3258: 0xc0cd4ee  jal         func_3353B8
label_2b325c:
    if (ctx->pc == 0x2B325Cu) {
        ctx->pc = 0x2B325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3258u;
        // 0x2b325c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3260u;
        goto label_2b3260;
    }
    ctx->pc = 0x2B3258u;
    SET_GPR_U32(ctx, 31, 0x2B3260u);
    ctx->pc = 0x2B325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3258u;
    // 0x2b325c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B3258u, 0x2B3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3260u;
label_2b3260:
    // 0x2b3260: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x2b3260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_2b3264:
    // 0x2b3264: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b3268:
    if (ctx->pc == 0x2B3268u) {
        ctx->pc = 0x2B326Cu;
        goto label_2b326c;
    }
    ctx->pc = 0x2B3264u;
    {
        const bool branch_taken_0x2b3264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3264) {
            ctx->pc = 0x2B3270u;
            goto label_2b3270;
        }
    }
    ctx->pc = 0x2B326Cu;
label_2b326c:
    // 0x2b326c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b326cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3270:
    // 0x2b3270: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2b3274:
    if (ctx->pc == 0x2B3274u) {
        ctx->pc = 0x2B3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3270u;
        // 0x2b3274: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3278u;
        goto label_2b3278;
    }
    ctx->pc = 0x2B3270u;
    {
        const bool branch_taken_0x2b3270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3270u;
        // 0x2b3274: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3270) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B3278u;
label_2b3278:
    // 0x2b3278: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2b3278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2b327c:
    // 0x2b327c: 0x906456e1  lbu         $a0, 0x56E1($v1)
    ctx->pc = 0x2b327cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22241)));
label_2b3280:
    // 0x2b3280: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2b3284:
    if (ctx->pc == 0x2B3284u) {
        ctx->pc = 0x2B3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3280u;
        // 0x2b3284: 0x24110011  addiu       $s1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3288u;
        goto label_2b3288;
    }
    ctx->pc = 0x2B3280u;
    {
        const bool branch_taken_0x2b3280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3280u;
        // 0x2b3284: 0x24110011  addiu       $s1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3280) {
            ctx->pc = 0x2B32B4u;
            goto label_2b32b4;
        }
    }
    ctx->pc = 0x2B3288u;
label_2b3288:
    // 0x2b3288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b3288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b328c:
    // 0x2b328c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b3290:
    // 0x2b3290: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b3294:
    // 0x2b3294: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_2b3298:
    if (ctx->pc == 0x2B3298u) {
        ctx->pc = 0x2B3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3294u;
        // 0x2b3298: 0x26a4b880  addiu       $a0, $s5, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B329Cu;
        goto label_2b329c;
    }
    ctx->pc = 0x2B3294u;
    {
        const bool branch_taken_0x2b3294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3294u;
        // 0x2b3298: 0x26a4b880  addiu       $a0, $s5, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3294) {
            ctx->pc = 0x2B32B4u;
            goto label_2b32b4;
        }
    }
    ctx->pc = 0x2B329Cu;
label_2b329c:
    // 0x2b329c: 0xc0cd4ee  jal         func_3353B8
label_2b32a0:
    if (ctx->pc == 0x2B32A0u) {
        ctx->pc = 0x2B32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B329Cu;
        // 0x2b32a0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B32A4u;
        goto label_2b32a4;
    }
    ctx->pc = 0x2B329Cu;
    SET_GPR_U32(ctx, 31, 0x2B32A4u);
    ctx->pc = 0x2B32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B329Cu;
    // 0x2b32a0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B329Cu, 0x2B32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32A4u;
label_2b32a4:
    // 0x2b32a4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2b32a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b32a8:
    // 0x2b32a8: 0x240400c3  addiu       $a0, $zero, 0xC3
    ctx->pc = 0x2b32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_2b32ac:
    // 0x2b32ac: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b32acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b32b0:
    // 0x2b32b0: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x2b32b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_2b32b4:
    // 0x2b32b4: 0xc0a367c  jal         func_28D9F0
label_2b32b8:
    if (ctx->pc == 0x2B32B8u) {
        ctx->pc = 0x2B32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32B4u;
        // 0x2b32b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B32BCu;
        goto label_2b32bc;
    }
    ctx->pc = 0x2B32B4u;
    SET_GPR_U32(ctx, 31, 0x2B32BCu);
    ctx->pc = 0x2B32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B32B4u;
    // 0x2b32b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B32B4u, 0x2B32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32BCu;
label_2b32bc:
    // 0x2b32bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b32c0:
    if (ctx->pc == 0x2B32C0u) {
        ctx->pc = 0x2B32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32BCu;
        // 0x2b32c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B32C4u;
        goto label_2b32c4;
    }
    ctx->pc = 0x2B32BCu;
    {
        const bool branch_taken_0x2b32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32BCu;
        // 0x2b32c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32bc) {
            ctx->pc = 0x2B32DCu;
            goto label_2b32dc;
        }
    }
    ctx->pc = 0x2B32C4u;
label_2b32c4:
    // 0x2b32c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b32c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b32c8:
    // 0x2b32c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b32c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b32cc:
    // 0x2b32cc: 0x2406025b  addiu       $a2, $zero, 0x25B
    ctx->pc = 0x2b32ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
label_2b32d0:
    // 0x2b32d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b32d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b32d4:
    // 0x2b32d4: 0xc0be7d2  jal         func_2F9F48
label_2b32d8:
    if (ctx->pc == 0x2B32D8u) {
        ctx->pc = 0x2B32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32D4u;
        // 0x2b32d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B32DCu;
        goto label_2b32dc;
    }
    ctx->pc = 0x2B32D4u;
    SET_GPR_U32(ctx, 31, 0x2B32DCu);
    ctx->pc = 0x2B32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B32D4u;
    // 0x2b32d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2B32D4u, 0x2B32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32DCu;
label_2b32dc:
    // 0x2b32dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2b32e0:
    // 0x2b32e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b32e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2b32e4:
    // 0x2b32e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b32e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b32e8:
    // 0x2b32e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b32ec:
    // 0x2b32ec: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b32ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2b32f0:
    // 0x2b32f0: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x2b32f0u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
label_2b32f4:
    // 0x2b32f4: 0xc0a367c  jal         func_28D9F0
label_2b32f8:
    if (ctx->pc == 0x2B32F8u) {
        ctx->pc = 0x2B32FCu;
        goto label_2b32fc;
    }
    ctx->pc = 0x2B32F4u;
    SET_GPR_U32(ctx, 31, 0x2B32FCu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B32F4u, 0x2B32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32FCu;
label_2b32fc:
    // 0x2b32fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b3300:
    if (ctx->pc == 0x2B3300u) {
        ctx->pc = 0x2B3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32FCu;
        // 0x2b3300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3304u;
        goto label_2b3304;
    }
    ctx->pc = 0x2B32FCu;
    {
        const bool branch_taken_0x2b32fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32FCu;
        // 0x2b3300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32fc) {
            ctx->pc = 0x2B3320u;
            goto label_2b3320;
        }
    }
    ctx->pc = 0x2B3304u;
label_2b3304:
    // 0x2b3304: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b3304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b3308:
    // 0x2b3308: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2b3308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b330c:
    // 0x2b330c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b330cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b3310:
    // 0x2b3310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b3310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b3314:
    // 0x2b3314: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b3314u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2b3318:
    // 0x2b3318: 0xc0bf3d4  jal         func_2FCF50
label_2b331c:
    if (ctx->pc == 0x2B331Cu) {
        ctx->pc = 0x2B331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3318u;
        // 0x2b331c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3320u;
        goto label_2b3320;
    }
    ctx->pc = 0x2B3318u;
    SET_GPR_U32(ctx, 31, 0x2B3320u);
    ctx->pc = 0x2B331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3318u;
    // 0x2b331c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B3318u, 0x2B3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3320u;
label_2b3320:
    // 0x2b3320: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b3320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b3324:
    // 0x2b3324: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b3324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b3328:
    // 0x2b3328: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b3328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b332c:
    // 0x2b332c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b332cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b3330:
    // 0x2b3330: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b3330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b3334:
    // 0x2b3334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b3334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b3338:
    // 0x2b3338: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b3338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b333c:
    // 0x2b333c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2b333cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b3340:
    // 0x2b3340: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2b3340u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3344:
    // 0x2b3344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3348:
    // 0x2b3348: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2b3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2b334c:
    // 0x2b334c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2b334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b3350:
    // 0x2b3350: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2b3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b3354:
    // 0x2b3354: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b3354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b3358:
    // 0x2b3358: 0x3e00008  jr          $ra
label_2b335c:
    if (ctx->pc == 0x2B335Cu) {
        ctx->pc = 0x2B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3358u;
        // 0x2b335c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3360u;
        goto label_fallthrough_0x2b3358;
    }
    ctx->pc = 0x2B3358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3358u;
        // 0x2b335c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b3358:
    ctx->pc = 0x2B3360u;
}
