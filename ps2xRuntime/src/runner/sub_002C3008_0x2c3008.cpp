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

// Function: sub_002C3008
// Address: 0x2c3008 - 0x2c32c0
void sub_002C3008_0x2c3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3008_0x2c3008");
#endif

    switch (ctx->pc) {
        case 0x2c3008u: goto label_2c3008;
        case 0x2c300cu: goto label_2c300c;
        case 0x2c3010u: goto label_2c3010;
        case 0x2c3014u: goto label_2c3014;
        case 0x2c3018u: goto label_2c3018;
        case 0x2c301cu: goto label_2c301c;
        case 0x2c3020u: goto label_2c3020;
        case 0x2c3024u: goto label_2c3024;
        case 0x2c3028u: goto label_2c3028;
        case 0x2c302cu: goto label_2c302c;
        case 0x2c3030u: goto label_2c3030;
        case 0x2c3034u: goto label_2c3034;
        case 0x2c3038u: goto label_2c3038;
        case 0x2c303cu: goto label_2c303c;
        case 0x2c3040u: goto label_2c3040;
        case 0x2c3044u: goto label_2c3044;
        case 0x2c3048u: goto label_2c3048;
        case 0x2c304cu: goto label_2c304c;
        case 0x2c3050u: goto label_2c3050;
        case 0x2c3054u: goto label_2c3054;
        case 0x2c3058u: goto label_2c3058;
        case 0x2c305cu: goto label_2c305c;
        case 0x2c3060u: goto label_2c3060;
        case 0x2c3064u: goto label_2c3064;
        case 0x2c3068u: goto label_2c3068;
        case 0x2c306cu: goto label_2c306c;
        case 0x2c3070u: goto label_2c3070;
        case 0x2c3074u: goto label_2c3074;
        case 0x2c3078u: goto label_2c3078;
        case 0x2c307cu: goto label_2c307c;
        case 0x2c3080u: goto label_2c3080;
        case 0x2c3084u: goto label_2c3084;
        case 0x2c3088u: goto label_2c3088;
        case 0x2c308cu: goto label_2c308c;
        case 0x2c3090u: goto label_2c3090;
        case 0x2c3094u: goto label_2c3094;
        case 0x2c3098u: goto label_2c3098;
        case 0x2c309cu: goto label_2c309c;
        case 0x2c30a0u: goto label_2c30a0;
        case 0x2c30a4u: goto label_2c30a4;
        case 0x2c30a8u: goto label_2c30a8;
        case 0x2c30acu: goto label_2c30ac;
        case 0x2c30b0u: goto label_2c30b0;
        case 0x2c30b4u: goto label_2c30b4;
        case 0x2c30b8u: goto label_2c30b8;
        case 0x2c30bcu: goto label_2c30bc;
        case 0x2c30c0u: goto label_2c30c0;
        case 0x2c30c4u: goto label_2c30c4;
        case 0x2c30c8u: goto label_2c30c8;
        case 0x2c30ccu: goto label_2c30cc;
        case 0x2c30d0u: goto label_2c30d0;
        case 0x2c30d4u: goto label_2c30d4;
        case 0x2c30d8u: goto label_2c30d8;
        case 0x2c30dcu: goto label_2c30dc;
        case 0x2c30e0u: goto label_2c30e0;
        case 0x2c30e4u: goto label_2c30e4;
        case 0x2c30e8u: goto label_2c30e8;
        case 0x2c30ecu: goto label_2c30ec;
        case 0x2c30f0u: goto label_2c30f0;
        case 0x2c30f4u: goto label_2c30f4;
        case 0x2c30f8u: goto label_2c30f8;
        case 0x2c30fcu: goto label_2c30fc;
        case 0x2c3100u: goto label_2c3100;
        case 0x2c3104u: goto label_2c3104;
        case 0x2c3108u: goto label_2c3108;
        case 0x2c310cu: goto label_2c310c;
        case 0x2c3110u: goto label_2c3110;
        case 0x2c3114u: goto label_2c3114;
        case 0x2c3118u: goto label_2c3118;
        case 0x2c311cu: goto label_2c311c;
        case 0x2c3120u: goto label_2c3120;
        case 0x2c3124u: goto label_2c3124;
        case 0x2c3128u: goto label_2c3128;
        case 0x2c312cu: goto label_2c312c;
        case 0x2c3130u: goto label_2c3130;
        case 0x2c3134u: goto label_2c3134;
        case 0x2c3138u: goto label_2c3138;
        case 0x2c313cu: goto label_2c313c;
        case 0x2c3140u: goto label_2c3140;
        case 0x2c3144u: goto label_2c3144;
        case 0x2c3148u: goto label_2c3148;
        case 0x2c314cu: goto label_2c314c;
        case 0x2c3150u: goto label_2c3150;
        case 0x2c3154u: goto label_2c3154;
        case 0x2c3158u: goto label_2c3158;
        case 0x2c315cu: goto label_2c315c;
        case 0x2c3160u: goto label_2c3160;
        case 0x2c3164u: goto label_2c3164;
        case 0x2c3168u: goto label_2c3168;
        case 0x2c316cu: goto label_2c316c;
        case 0x2c3170u: goto label_2c3170;
        case 0x2c3174u: goto label_2c3174;
        case 0x2c3178u: goto label_2c3178;
        case 0x2c317cu: goto label_2c317c;
        case 0x2c3180u: goto label_2c3180;
        case 0x2c3184u: goto label_2c3184;
        case 0x2c3188u: goto label_2c3188;
        case 0x2c318cu: goto label_2c318c;
        case 0x2c3190u: goto label_2c3190;
        case 0x2c3194u: goto label_2c3194;
        case 0x2c3198u: goto label_2c3198;
        case 0x2c319cu: goto label_2c319c;
        case 0x2c31a0u: goto label_2c31a0;
        case 0x2c31a4u: goto label_2c31a4;
        case 0x2c31a8u: goto label_2c31a8;
        case 0x2c31acu: goto label_2c31ac;
        case 0x2c31b0u: goto label_2c31b0;
        case 0x2c31b4u: goto label_2c31b4;
        case 0x2c31b8u: goto label_2c31b8;
        case 0x2c31bcu: goto label_2c31bc;
        case 0x2c31c0u: goto label_2c31c0;
        case 0x2c31c4u: goto label_2c31c4;
        case 0x2c31c8u: goto label_2c31c8;
        case 0x2c31ccu: goto label_2c31cc;
        case 0x2c31d0u: goto label_2c31d0;
        case 0x2c31d4u: goto label_2c31d4;
        case 0x2c31d8u: goto label_2c31d8;
        case 0x2c31dcu: goto label_2c31dc;
        case 0x2c31e0u: goto label_2c31e0;
        case 0x2c31e4u: goto label_2c31e4;
        case 0x2c31e8u: goto label_2c31e8;
        case 0x2c31ecu: goto label_2c31ec;
        case 0x2c31f0u: goto label_2c31f0;
        case 0x2c31f4u: goto label_2c31f4;
        case 0x2c31f8u: goto label_2c31f8;
        case 0x2c31fcu: goto label_2c31fc;
        case 0x2c3200u: goto label_2c3200;
        case 0x2c3204u: goto label_2c3204;
        case 0x2c3208u: goto label_2c3208;
        case 0x2c320cu: goto label_2c320c;
        case 0x2c3210u: goto label_2c3210;
        case 0x2c3214u: goto label_2c3214;
        case 0x2c3218u: goto label_2c3218;
        case 0x2c321cu: goto label_2c321c;
        case 0x2c3220u: goto label_2c3220;
        case 0x2c3224u: goto label_2c3224;
        case 0x2c3228u: goto label_2c3228;
        case 0x2c322cu: goto label_2c322c;
        case 0x2c3230u: goto label_2c3230;
        case 0x2c3234u: goto label_2c3234;
        case 0x2c3238u: goto label_2c3238;
        case 0x2c323cu: goto label_2c323c;
        case 0x2c3240u: goto label_2c3240;
        case 0x2c3244u: goto label_2c3244;
        case 0x2c3248u: goto label_2c3248;
        case 0x2c324cu: goto label_2c324c;
        case 0x2c3250u: goto label_2c3250;
        case 0x2c3254u: goto label_2c3254;
        case 0x2c3258u: goto label_2c3258;
        case 0x2c325cu: goto label_2c325c;
        case 0x2c3260u: goto label_2c3260;
        case 0x2c3264u: goto label_2c3264;
        case 0x2c3268u: goto label_2c3268;
        case 0x2c326cu: goto label_2c326c;
        case 0x2c3270u: goto label_2c3270;
        case 0x2c3274u: goto label_2c3274;
        case 0x2c3278u: goto label_2c3278;
        case 0x2c327cu: goto label_2c327c;
        case 0x2c3280u: goto label_2c3280;
        case 0x2c3284u: goto label_2c3284;
        case 0x2c3288u: goto label_2c3288;
        case 0x2c328cu: goto label_2c328c;
        case 0x2c3290u: goto label_2c3290;
        case 0x2c3294u: goto label_2c3294;
        case 0x2c3298u: goto label_2c3298;
        case 0x2c329cu: goto label_2c329c;
        case 0x2c32a0u: goto label_2c32a0;
        case 0x2c32a4u: goto label_2c32a4;
        case 0x2c32a8u: goto label_2c32a8;
        case 0x2c32acu: goto label_2c32ac;
        case 0x2c32b0u: goto label_2c32b0;
        case 0x2c32b4u: goto label_2c32b4;
        case 0x2c32b8u: goto label_2c32b8;
        case 0x2c32bcu: goto label_2c32bc;
        default: break;
    }

    ctx->pc = 0x2c3008u;

label_2c3008:
    // 0x2c3008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c3008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c300c:
    // 0x2c300c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3010:
    // 0x2c3010: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c3010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2c3014:
    // 0x2c3014: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c3014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2c3018:
    // 0x2c3018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c301c:
    // 0x2c301c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2c3020:
    // 0x2c3020: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c3024:
    // 0x2c3024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c3028:
    // 0x2c3028: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c3028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c302c:
    // 0x2c302c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c3030:
    // 0x2c3030: 0x1465002d  bne         $v1, $a1, . + 4 + (0x2D << 2)
label_2c3034:
    if (ctx->pc == 0x2C3034u) {
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3030u;
        // 0x2c3034: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3038u;
        goto label_2c3038;
    }
    ctx->pc = 0x2C3030u;
    {
        const bool branch_taken_0x2c3030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3030u;
        // 0x2c3034: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3030) {
            ctx->pc = 0x2C30E8u;
            goto label_2c30e8;
        }
    }
    ctx->pc = 0x2C3038u;
label_2c3038:
    // 0x2c3038: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x2c3038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c303c:
    // 0x2c303c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2c303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2c3040:
    // 0x2c3040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c3044:
    // 0x2c3044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3048:
    // 0x2c3048: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c304c:
    // 0x2c304c: 0xc105df6  jal         func_4177D8
label_2c3050:
    if (ctx->pc == 0x2C3050u) {
        ctx->pc = 0x2C3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C304Cu;
        // 0x2c3050: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3054u;
        goto label_2c3054;
    }
    ctx->pc = 0x2C304Cu;
    SET_GPR_U32(ctx, 31, 0x2C3054u);
    ctx->pc = 0x2C3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C304Cu;
    // 0x2c3050: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2C304Cu, 0x2C3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3054u;
label_2c3054:
    // 0x2c3054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c3054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3058:
    // 0x2c3058: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
label_2c305c:
    if (ctx->pc == 0x2C305Cu) {
        ctx->pc = 0x2C3060u;
        goto label_2c3060;
    }
    ctx->pc = 0x2C3058u;
    {
        const bool branch_taken_0x2c3058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3058) {
            ctx->pc = 0x2C323Cu;
            goto label_2c323c;
        }
    }
    ctx->pc = 0x2C3060u;
label_2c3060:
    // 0x2c3060: 0xc10587a  jal         func_4161E8
label_2c3064:
    if (ctx->pc == 0x2C3064u) {
        ctx->pc = 0x2C3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3060u;
        // 0x2c3064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3068u;
        goto label_2c3068;
    }
    ctx->pc = 0x2C3060u;
    SET_GPR_U32(ctx, 31, 0x2C3068u);
    ctx->pc = 0x2C3064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3060u;
    // 0x2c3064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C3060u, 0x2C3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3068u;
label_2c3068:
    // 0x2c3068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c306c:
    // 0x2c306c: 0xc0cdb38  jal         func_336CE0
label_2c3070:
    if (ctx->pc == 0x2C3070u) {
        ctx->pc = 0x2C3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C306Cu;
        // 0x2c3070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3074u;
        goto label_2c3074;
    }
    ctx->pc = 0x2C306Cu;
    SET_GPR_U32(ctx, 31, 0x2C3074u);
    ctx->pc = 0x2C3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C306Cu;
    // 0x2c3070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C306Cu, 0x2C3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3074u;
label_2c3074:
    // 0x2c3074: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2c3074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2c3078:
    // 0x2c3078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c307c:
    // 0x2c307c: 0x0  nop
    ctx->pc = 0x2c307cu;
    // NOP
label_2c3080:
    // 0x2c3080: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3084:
    // 0x2c3084: 0x0  nop
    ctx->pc = 0x2c3084u;
    // NOP
label_2c3088:
    // 0x2c3088: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
label_2c308c:
    if (ctx->pc == 0x2C308Cu) {
        ctx->pc = 0x2C308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3088u;
        // 0x2c308c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3090u;
        goto label_2c3090;
    }
    ctx->pc = 0x2C3088u;
    {
        const bool branch_taken_0x2c3088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3088u;
        // 0x2c308c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3088) {
            ctx->pc = 0x2C323Cu;
            goto label_2c323c;
        }
    }
    ctx->pc = 0x2C3090u;
label_2c3090:
    // 0x2c3090: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x2c3090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2c3094:
    // 0x2c3094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3098:
    // 0x2c3098: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_2c309c:
    if (ctx->pc == 0x2C309Cu) {
        ctx->pc = 0x2C309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3098u;
        // 0x2c309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30A0u;
        goto label_2c30a0;
    }
    ctx->pc = 0x2C3098u;
    {
        const bool branch_taken_0x2c3098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3098u;
        // 0x2c309c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3098) {
            ctx->pc = 0x2C32A0u;
            goto label_2c32a0;
        }
    }
    ctx->pc = 0x2C30A0u;
label_2c30a0:
    // 0x2c30a0: 0xc0a4e54  jal         func_293950
label_2c30a4:
    if (ctx->pc == 0x2C30A4u) {
        ctx->pc = 0x2C30A8u;
        goto label_2c30a8;
    }
    ctx->pc = 0x2C30A0u;
    SET_GPR_U32(ctx, 31, 0x2C30A8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C30A0u, 0x2C30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30A8u;
label_2c30a8:
    // 0x2c30a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c30a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c30ac:
    // 0x2c30ac: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
label_2c30b0:
    if (ctx->pc == 0x2C30B0u) {
        ctx->pc = 0x2C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30ACu;
        // 0x2c30b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30B4u;
        goto label_2c30b4;
    }
    ctx->pc = 0x2C30ACu;
    {
        const bool branch_taken_0x2c30ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c30ac) {
            ctx->pc = 0x2C30B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30ACu;
            // 0x2c30b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C30E0u;
            goto label_2c30e0;
        }
    }
    ctx->pc = 0x2C30B4u;
label_2c30b4:
    // 0x2c30b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c30b8:
    // 0x2c30b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c30b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c30bc:
    // 0x2c30bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c30c0:
    // 0x2c30c0: 0x40f809  jalr        $v0
label_2c30c4:
    if (ctx->pc == 0x2C30C4u) {
        ctx->pc = 0x2C30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30C0u;
        // 0x2c30c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30C8u;
        goto label_2c30c8;
    }
    ctx->pc = 0x2C30C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C30C8u);
        ctx->pc = 0x2C30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30C0u;
        // 0x2c30c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C30C0u, 0x2C30C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C30C8u;
label_2c30c8:
    // 0x2c30c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c30cc:
    // 0x2c30cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c30ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c30d0:
    // 0x2c30d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c30d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c30d4:
    // 0x2c30d4: 0xc0b0784  jal         func_2C1E10
label_2c30d8:
    if (ctx->pc == 0x2C30D8u) {
        ctx->pc = 0x2C30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30D4u;
        // 0x2c30d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30DCu;
        goto label_2c30dc;
    }
    ctx->pc = 0x2C30D4u;
    SET_GPR_U32(ctx, 31, 0x2C30DCu);
    ctx->pc = 0x2C30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C30D4u;
    // 0x2c30d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1E10u, 0x2C30D4u, 0x2C30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30DCu;
label_2c30dc:
    // 0x2c30dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c30e0:
    // 0x2c30e0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2c30e4:
    if (ctx->pc == 0x2C30E4u) {
        ctx->pc = 0x2C30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30E0u;
        // 0x2c30e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30E8u;
        goto label_2c30e8;
    }
    ctx->pc = 0x2C30E0u;
    {
        const bool branch_taken_0x2c30e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30E0u;
        // 0x2c30e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30e0) {
            ctx->pc = 0x2C3294u;
            goto label_2c3294;
        }
    }
    ctx->pc = 0x2C30E8u;
label_2c30e8:
    // 0x2c30e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c30ec:
    // 0x2c30ec: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_2c30f0:
    if (ctx->pc == 0x2C30F0u) {
        ctx->pc = 0x2C30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30ECu;
        // 0x2c30f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30F4u;
        goto label_2c30f4;
    }
    ctx->pc = 0x2C30ECu;
    {
        const bool branch_taken_0x2c30ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30ECu;
        // 0x2c30f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30ec) {
            ctx->pc = 0x2C3140u;
            goto label_2c3140;
        }
    }
    ctx->pc = 0x2C30F4u;
label_2c30f4:
    // 0x2c30f4: 0xc0a4e54  jal         func_293950
label_2c30f8:
    if (ctx->pc == 0x2C30F8u) {
        ctx->pc = 0x2C30FCu;
        goto label_2c30fc;
    }
    ctx->pc = 0x2C30F4u;
    SET_GPR_U32(ctx, 31, 0x2C30FCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C30F4u, 0x2C30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C30FCu;
label_2c30fc:
    // 0x2c30fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c30fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3100:
    // 0x2c3100: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
label_2c3104:
    if (ctx->pc == 0x2C3104u) {
        ctx->pc = 0x2C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3100u;
        // 0x2c3104: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3108u;
        goto label_2c3108;
    }
    ctx->pc = 0x2C3100u;
    {
        const bool branch_taken_0x2c3100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3100u;
        // 0x2c3104: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3100) {
            ctx->pc = 0x2C328Cu;
            goto label_2c328c;
        }
    }
    ctx->pc = 0x2C3108u;
label_2c3108:
    // 0x2c3108: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2c3108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c310c:
    // 0x2c310c: 0x90430ada  lbu         $v1, 0xADA($v0)
    ctx->pc = 0x2c310cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2778)));
label_2c3110:
    // 0x2c3110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3114:
    // 0x2c3114: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x2c3114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c3118:
    // 0x2c3118: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2c3118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c311c:
    // 0x2c311c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2c311cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c3120:
    // 0x2c3120: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2c3120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2c3124:
    // 0x2c3124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3128:
    // 0x2c3128: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c3128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c312c:
    // 0x2c312c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2c312cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c3130:
    // 0x2c3130: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c3130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c3134:
    // 0x2c3134: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2c3134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3138:
    // 0x2c3138: 0x10000052  b           . + 4 + (0x52 << 2)
label_2c313c:
    if (ctx->pc == 0x2C313Cu) {
        ctx->pc = 0x2C313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3138u;
        // 0x2c313c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3140u;
        goto label_2c3140;
    }
    ctx->pc = 0x2C3138u;
    {
        const bool branch_taken_0x2c3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3138u;
        // 0x2c313c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3138) {
            ctx->pc = 0x2C3284u;
            goto label_2c3284;
        }
    }
    ctx->pc = 0x2C3140u;
label_2c3140:
    // 0x2c3140: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_2c3144:
    if (ctx->pc == 0x2C3144u) {
        ctx->pc = 0x2C3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3140u;
        // 0x2c3144: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3148u;
        goto label_2c3148;
    }
    ctx->pc = 0x2C3140u;
    {
        const bool branch_taken_0x2c3140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3140) {
            ctx->pc = 0x2C3144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3140u;
            // 0x2c3144: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C319Cu;
            goto label_2c319c;
        }
    }
    ctx->pc = 0x2C3148u;
label_2c3148:
    // 0x2c3148: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c314c:
    // 0x2c314c: 0x54450013  bnel        $v0, $a1, . + 4 + (0x13 << 2)
label_2c3150:
    if (ctx->pc == 0x2C3150u) {
        ctx->pc = 0x2C3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C314Cu;
        // 0x2c3150: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3154u;
        goto label_2c3154;
    }
    ctx->pc = 0x2C314Cu;
    {
        const bool branch_taken_0x2c314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c314c) {
            ctx->pc = 0x2C3150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C314Cu;
            // 0x2c3150: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C319Cu;
            goto label_2c319c;
        }
    }
    ctx->pc = 0x2C3154u;
label_2c3154:
    // 0x2c3154: 0xc0a4e54  jal         func_293950
label_2c3158:
    if (ctx->pc == 0x2C3158u) {
        ctx->pc = 0x2C315Cu;
        goto label_2c315c;
    }
    ctx->pc = 0x2C3154u;
    SET_GPR_U32(ctx, 31, 0x2C315Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C3154u, 0x2C315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C315Cu;
label_2c315c:
    // 0x2c315c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c315cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3160:
    // 0x2c3160: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
label_2c3164:
    if (ctx->pc == 0x2C3164u) {
        ctx->pc = 0x2C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3160u;
        // 0x2c3164: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3168u;
        goto label_2c3168;
    }
    ctx->pc = 0x2C3160u;
    {
        const bool branch_taken_0x2c3160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3160u;
        // 0x2c3164: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3160) {
            ctx->pc = 0x2C328Cu;
            goto label_2c328c;
        }
    }
    ctx->pc = 0x2C3168u;
label_2c3168:
    // 0x2c3168: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2c3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c316c:
    // 0x2c316c: 0x90430ada  lbu         $v1, 0xADA($v0)
    ctx->pc = 0x2c316cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2778)));
label_2c3170:
    // 0x2c3170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3174:
    // 0x2c3174: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x2c3174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c3178:
    // 0x2c3178: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2c3178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c317c:
    // 0x2c317c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2c317cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c3180:
    // 0x2c3180: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2c3180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_2c3184:
    // 0x2c3184: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c3188:
    // 0x2c3188: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c3188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c318c:
    // 0x2c318c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2c318cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c3190:
    // 0x2c3190: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c3190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c3194:
    // 0x2c3194: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2c3198:
    if (ctx->pc == 0x2C3198u) {
        ctx->pc = 0x2C3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3194u;
        // 0x2c3198: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C319Cu;
        goto label_2c319c;
    }
    ctx->pc = 0x2C3194u;
    {
        const bool branch_taken_0x2c3194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3194u;
        // 0x2c3198: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3194) {
            ctx->pc = 0x2C3280u;
            goto label_2c3280;
        }
    }
    ctx->pc = 0x2C319Cu;
label_2c319c:
    // 0x2c319c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c31a0:
    // 0x2c31a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c31a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c31a4:
    // 0x2c31a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2c31a8:
    if (ctx->pc == 0x2C31A8u) {
        ctx->pc = 0x2C31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31A4u;
        // 0x2c31a8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31ACu;
        goto label_2c31ac;
    }
    ctx->pc = 0x2C31A4u;
    {
        const bool branch_taken_0x2c31a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31A4u;
        // 0x2c31a8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31a4) {
            ctx->pc = 0x2C323Cu;
            goto label_2c323c;
        }
    }
    ctx->pc = 0x2C31ACu;
label_2c31ac:
    // 0x2c31ac: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2c31acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c31b0:
    // 0x2c31b0: 0xc0e409a  jal         func_390268
label_2c31b4:
    if (ctx->pc == 0x2C31B4u) {
        ctx->pc = 0x2C31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31B0u;
        // 0x2c31b4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31B8u;
        goto label_2c31b8;
    }
    ctx->pc = 0x2C31B0u;
    SET_GPR_U32(ctx, 31, 0x2C31B8u);
    ctx->pc = 0x2C31B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C31B0u;
    // 0x2c31b4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C31B0u, 0x2C31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31B8u;
label_2c31b8:
    // 0x2c31b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c31b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c31bc:
    // 0x2c31bc: 0xc0a34d6  jal         func_28D358
label_2c31c0:
    if (ctx->pc == 0x2C31C0u) {
        ctx->pc = 0x2C31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31BCu;
        // 0x2c31c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31C4u;
        goto label_2c31c4;
    }
    ctx->pc = 0x2C31BCu;
    SET_GPR_U32(ctx, 31, 0x2C31C4u);
    ctx->pc = 0x2C31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C31BCu;
    // 0x2c31c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C31BCu, 0x2C31C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31C4u;
label_2c31c4:
    // 0x2c31c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c31c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c31c8:
    // 0x2c31c8: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_2c31cc:
    if (ctx->pc == 0x2C31CCu) {
        ctx->pc = 0x2C31D0u;
        goto label_2c31d0;
    }
    ctx->pc = 0x2C31C8u;
    {
        const bool branch_taken_0x2c31c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c31c8) {
            ctx->pc = 0x2C323Cu;
            goto label_2c323c;
        }
    }
    ctx->pc = 0x2C31D0u;
label_2c31d0:
    // 0x2c31d0: 0xc0a4e54  jal         func_293950
label_2c31d4:
    if (ctx->pc == 0x2C31D4u) {
        ctx->pc = 0x2C31D8u;
        goto label_2c31d8;
    }
    ctx->pc = 0x2C31D0u;
    SET_GPR_U32(ctx, 31, 0x2C31D8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C31D0u, 0x2C31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C31D8u;
label_2c31d8:
    // 0x2c31d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c31d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c31dc:
    // 0x2c31dc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_2c31e0:
    if (ctx->pc == 0x2C31E0u) {
        ctx->pc = 0x2C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31DCu;
        // 0x2c31e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31E4u;
        goto label_2c31e4;
    }
    ctx->pc = 0x2C31DCu;
    {
        const bool branch_taken_0x2c31dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31DCu;
        // 0x2c31e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31dc) {
            ctx->pc = 0x2C320Cu;
            goto label_2c320c;
        }
    }
    ctx->pc = 0x2C31E4u;
label_2c31e4:
    // 0x2c31e4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2c31e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2c31e8:
    // 0x2c31e8: 0x90460adc  lbu         $a2, 0xADC($v0)
    ctx->pc = 0x2c31e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2780)));
label_2c31ec:
    // 0x2c31ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c31f0:
    // 0x2c31f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c31f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c31f4:
    // 0x2c31f4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2c31f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_2c31f8:
    // 0x2c31f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c31f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c31fc:
    // 0x2c31fc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2c31fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2c3200:
    // 0x2c3200: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c3200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c3204:
    // 0x2c3204: 0xc0b010c  jal         func_2C0430
label_2c3208:
    if (ctx->pc == 0x2C3208u) {
        ctx->pc = 0x2C3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3204u;
        // 0x2c3208: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C320Cu;
        goto label_2c320c;
    }
    ctx->pc = 0x2C3204u;
    SET_GPR_U32(ctx, 31, 0x2C320Cu);
    ctx->pc = 0x2C3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3204u;
    // 0x2c3208: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0430u, 0x2C3204u, 0x2C320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C320Cu;
label_2c320c:
    // 0x2c320c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3210:
    // 0x2c3210: 0xc0a35d6  jal         func_28D758
label_2c3214:
    if (ctx->pc == 0x2C3214u) {
        ctx->pc = 0x2C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3210u;
        // 0x2c3214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3218u;
        goto label_2c3218;
    }
    ctx->pc = 0x2C3210u;
    SET_GPR_U32(ctx, 31, 0x2C3218u);
    ctx->pc = 0x2C3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3210u;
    // 0x2c3214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C3210u, 0x2C3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3218u;
label_2c3218:
    // 0x2c3218: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c3218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c321c:
    // 0x2c321c: 0xc0a3032  jal         func_28C0C8
label_2c3220:
    if (ctx->pc == 0x2C3220u) {
        ctx->pc = 0x2C3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C321Cu;
        // 0x2c3220: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3224u;
        goto label_2c3224;
    }
    ctx->pc = 0x2C321Cu;
    SET_GPR_U32(ctx, 31, 0x2C3224u);
    ctx->pc = 0x2C3220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C321Cu;
    // 0x2c3220: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x2C321Cu, 0x2C3224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3224u;
label_2c3224:
    // 0x2c3224: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c3224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3228:
    // 0x2c3228: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c3228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c322c:
    // 0x2c322c: 0xc0a3050  jal         func_28C140
label_2c3230:
    if (ctx->pc == 0x2C3230u) {
        ctx->pc = 0x2C3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C322Cu;
        // 0x2c3230: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3234u;
        goto label_2c3234;
    }
    ctx->pc = 0x2C322Cu;
    SET_GPR_U32(ctx, 31, 0x2C3234u);
    ctx->pc = 0x2C3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C322Cu;
    // 0x2c3230: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C140u, 0x2C322Cu, 0x2C3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3234u;
label_2c3234:
    // 0x2c3234: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2c3238:
    if (ctx->pc == 0x2C3238u) {
        ctx->pc = 0x2C3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3234u;
        // 0x2c3238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C323Cu;
        goto label_2c323c;
    }
    ctx->pc = 0x2C3234u;
    {
        const bool branch_taken_0x2c3234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3234u;
        // 0x2c3238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3234) {
            ctx->pc = 0x2C32A0u;
            goto label_2c32a0;
        }
    }
    ctx->pc = 0x2C323Cu;
label_2c323c:
    // 0x2c323c: 0xc0a4e54  jal         func_293950
label_2c3240:
    if (ctx->pc == 0x2C3240u) {
        ctx->pc = 0x2C3244u;
        goto label_2c3244;
    }
    ctx->pc = 0x2C323Cu;
    SET_GPR_U32(ctx, 31, 0x2C3244u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C323Cu, 0x2C3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3244u;
label_2c3244:
    // 0x2c3244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c3244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c3248:
    // 0x2c3248: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c324c:
    if (ctx->pc == 0x2C324Cu) {
        ctx->pc = 0x2C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3248u;
        // 0x2c324c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3250u;
        goto label_2c3250;
    }
    ctx->pc = 0x2C3248u;
    {
        const bool branch_taken_0x2c3248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3248u;
        // 0x2c324c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3248) {
            ctx->pc = 0x2C328Cu;
            goto label_2c328c;
        }
    }
    ctx->pc = 0x2C3250u;
label_2c3250:
    // 0x2c3250: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2c3250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c3254:
    // 0x2c3254: 0x90430ada  lbu         $v1, 0xADA($v0)
    ctx->pc = 0x2c3254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2778)));
label_2c3258:
    // 0x2c3258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c325c:
    // 0x2c325c: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x2c325cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c3260:
    // 0x2c3260: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2c3260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c3264:
    // 0x2c3264: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2c3264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c3268:
    // 0x2c3268: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x2c3268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c326c:
    // 0x2c326c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c326cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3270:
    // 0x2c3270: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c3270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c3274:
    // 0x2c3274: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2c3274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_2c3278:
    // 0x2c3278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c3278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c327c:
    // 0x2c327c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c327cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3280:
    // 0x2c3280: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2c3280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3284:
    // 0x2c3284: 0xc0b14fc  jal         func_2C53F0
label_2c3288:
    if (ctx->pc == 0x2C3288u) {
        ctx->pc = 0x2C3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3284u;
        // 0x2c3288: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C328Cu;
        goto label_2c328c;
    }
    ctx->pc = 0x2C3284u;
    SET_GPR_U32(ctx, 31, 0x2C328Cu);
    ctx->pc = 0x2C3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3284u;
    // 0x2c3288: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C53F0u, 0x2C3284u, 0x2C328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C328Cu;
label_2c328c:
    // 0x2c328c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3290:
    // 0x2c3290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c3290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3294:
    // 0x2c3294: 0xc0a35d6  jal         func_28D758
label_2c3298:
    if (ctx->pc == 0x2C3298u) {
        ctx->pc = 0x2C329Cu;
        goto label_2c329c;
    }
    ctx->pc = 0x2C3294u;
    SET_GPR_U32(ctx, 31, 0x2C329Cu);
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C3294u, 0x2C329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C329Cu;
label_2c329c:
    // 0x2c329c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c32a0:
    // 0x2c32a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c32a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c32a4:
    // 0x2c32a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c32a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c32a8:
    // 0x2c32a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c32a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c32ac:
    // 0x2c32ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c32acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c32b0:
    // 0x2c32b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c32b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c32b4:
    // 0x2c32b4: 0x3e00008  jr          $ra
label_2c32b8:
    if (ctx->pc == 0x2C32B8u) {
        ctx->pc = 0x2C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32B4u;
        // 0x2c32b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C32BCu;
        goto label_2c32bc;
    }
    ctx->pc = 0x2C32B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32B4u;
        // 0x2c32b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C32B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C32BCu;
label_2c32bc:
    // 0x2c32bc: 0x0  nop
    ctx->pc = 0x2c32bcu;
    // NOP
    ctx->pc = 0x2c32c0u;
}
