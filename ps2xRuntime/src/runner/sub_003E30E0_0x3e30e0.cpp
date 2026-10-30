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

// Function: sub_003E30E0
// Address: 0x3e30e0 - 0x3e33c8
void sub_003E30E0_0x3e30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E30E0_0x3e30e0");
#endif

    switch (ctx->pc) {
        case 0x3e30e0u: goto label_3e30e0;
        case 0x3e30e4u: goto label_3e30e4;
        case 0x3e30e8u: goto label_3e30e8;
        case 0x3e30ecu: goto label_3e30ec;
        case 0x3e30f0u: goto label_3e30f0;
        case 0x3e30f4u: goto label_3e30f4;
        case 0x3e30f8u: goto label_3e30f8;
        case 0x3e30fcu: goto label_3e30fc;
        case 0x3e3100u: goto label_3e3100;
        case 0x3e3104u: goto label_3e3104;
        case 0x3e3108u: goto label_3e3108;
        case 0x3e310cu: goto label_3e310c;
        case 0x3e3110u: goto label_3e3110;
        case 0x3e3114u: goto label_3e3114;
        case 0x3e3118u: goto label_3e3118;
        case 0x3e311cu: goto label_3e311c;
        case 0x3e3120u: goto label_3e3120;
        case 0x3e3124u: goto label_3e3124;
        case 0x3e3128u: goto label_3e3128;
        case 0x3e312cu: goto label_3e312c;
        case 0x3e3130u: goto label_3e3130;
        case 0x3e3134u: goto label_3e3134;
        case 0x3e3138u: goto label_3e3138;
        case 0x3e313cu: goto label_3e313c;
        case 0x3e3140u: goto label_3e3140;
        case 0x3e3144u: goto label_3e3144;
        case 0x3e3148u: goto label_3e3148;
        case 0x3e314cu: goto label_3e314c;
        case 0x3e3150u: goto label_3e3150;
        case 0x3e3154u: goto label_3e3154;
        case 0x3e3158u: goto label_3e3158;
        case 0x3e315cu: goto label_3e315c;
        case 0x3e3160u: goto label_3e3160;
        case 0x3e3164u: goto label_3e3164;
        case 0x3e3168u: goto label_3e3168;
        case 0x3e316cu: goto label_3e316c;
        case 0x3e3170u: goto label_3e3170;
        case 0x3e3174u: goto label_3e3174;
        case 0x3e3178u: goto label_3e3178;
        case 0x3e317cu: goto label_3e317c;
        case 0x3e3180u: goto label_3e3180;
        case 0x3e3184u: goto label_3e3184;
        case 0x3e3188u: goto label_3e3188;
        case 0x3e318cu: goto label_3e318c;
        case 0x3e3190u: goto label_3e3190;
        case 0x3e3194u: goto label_3e3194;
        case 0x3e3198u: goto label_3e3198;
        case 0x3e319cu: goto label_3e319c;
        case 0x3e31a0u: goto label_3e31a0;
        case 0x3e31a4u: goto label_3e31a4;
        case 0x3e31a8u: goto label_3e31a8;
        case 0x3e31acu: goto label_3e31ac;
        case 0x3e31b0u: goto label_3e31b0;
        case 0x3e31b4u: goto label_3e31b4;
        case 0x3e31b8u: goto label_3e31b8;
        case 0x3e31bcu: goto label_3e31bc;
        case 0x3e31c0u: goto label_3e31c0;
        case 0x3e31c4u: goto label_3e31c4;
        case 0x3e31c8u: goto label_3e31c8;
        case 0x3e31ccu: goto label_3e31cc;
        case 0x3e31d0u: goto label_3e31d0;
        case 0x3e31d4u: goto label_3e31d4;
        case 0x3e31d8u: goto label_3e31d8;
        case 0x3e31dcu: goto label_3e31dc;
        case 0x3e31e0u: goto label_3e31e0;
        case 0x3e31e4u: goto label_3e31e4;
        case 0x3e31e8u: goto label_3e31e8;
        case 0x3e31ecu: goto label_3e31ec;
        case 0x3e31f0u: goto label_3e31f0;
        case 0x3e31f4u: goto label_3e31f4;
        case 0x3e31f8u: goto label_3e31f8;
        case 0x3e31fcu: goto label_3e31fc;
        case 0x3e3200u: goto label_3e3200;
        case 0x3e3204u: goto label_3e3204;
        case 0x3e3208u: goto label_3e3208;
        case 0x3e320cu: goto label_3e320c;
        case 0x3e3210u: goto label_3e3210;
        case 0x3e3214u: goto label_3e3214;
        case 0x3e3218u: goto label_3e3218;
        case 0x3e321cu: goto label_3e321c;
        case 0x3e3220u: goto label_3e3220;
        case 0x3e3224u: goto label_3e3224;
        case 0x3e3228u: goto label_3e3228;
        case 0x3e322cu: goto label_3e322c;
        case 0x3e3230u: goto label_3e3230;
        case 0x3e3234u: goto label_3e3234;
        case 0x3e3238u: goto label_3e3238;
        case 0x3e323cu: goto label_3e323c;
        case 0x3e3240u: goto label_3e3240;
        case 0x3e3244u: goto label_3e3244;
        case 0x3e3248u: goto label_3e3248;
        case 0x3e324cu: goto label_3e324c;
        case 0x3e3250u: goto label_3e3250;
        case 0x3e3254u: goto label_3e3254;
        case 0x3e3258u: goto label_3e3258;
        case 0x3e325cu: goto label_3e325c;
        case 0x3e3260u: goto label_3e3260;
        case 0x3e3264u: goto label_3e3264;
        case 0x3e3268u: goto label_3e3268;
        case 0x3e326cu: goto label_3e326c;
        case 0x3e3270u: goto label_3e3270;
        case 0x3e3274u: goto label_3e3274;
        case 0x3e3278u: goto label_3e3278;
        case 0x3e327cu: goto label_3e327c;
        case 0x3e3280u: goto label_3e3280;
        case 0x3e3284u: goto label_3e3284;
        case 0x3e3288u: goto label_3e3288;
        case 0x3e328cu: goto label_3e328c;
        case 0x3e3290u: goto label_3e3290;
        case 0x3e3294u: goto label_3e3294;
        case 0x3e3298u: goto label_3e3298;
        case 0x3e329cu: goto label_3e329c;
        case 0x3e32a0u: goto label_3e32a0;
        case 0x3e32a4u: goto label_3e32a4;
        case 0x3e32a8u: goto label_3e32a8;
        case 0x3e32acu: goto label_3e32ac;
        case 0x3e32b0u: goto label_3e32b0;
        case 0x3e32b4u: goto label_3e32b4;
        case 0x3e32b8u: goto label_3e32b8;
        case 0x3e32bcu: goto label_3e32bc;
        case 0x3e32c0u: goto label_3e32c0;
        case 0x3e32c4u: goto label_3e32c4;
        case 0x3e32c8u: goto label_3e32c8;
        case 0x3e32ccu: goto label_3e32cc;
        case 0x3e32d0u: goto label_3e32d0;
        case 0x3e32d4u: goto label_3e32d4;
        case 0x3e32d8u: goto label_3e32d8;
        case 0x3e32dcu: goto label_3e32dc;
        case 0x3e32e0u: goto label_3e32e0;
        case 0x3e32e4u: goto label_3e32e4;
        case 0x3e32e8u: goto label_3e32e8;
        case 0x3e32ecu: goto label_3e32ec;
        case 0x3e32f0u: goto label_3e32f0;
        case 0x3e32f4u: goto label_3e32f4;
        case 0x3e32f8u: goto label_3e32f8;
        case 0x3e32fcu: goto label_3e32fc;
        case 0x3e3300u: goto label_3e3300;
        case 0x3e3304u: goto label_3e3304;
        case 0x3e3308u: goto label_3e3308;
        case 0x3e330cu: goto label_3e330c;
        case 0x3e3310u: goto label_3e3310;
        case 0x3e3314u: goto label_3e3314;
        case 0x3e3318u: goto label_3e3318;
        case 0x3e331cu: goto label_3e331c;
        case 0x3e3320u: goto label_3e3320;
        case 0x3e3324u: goto label_3e3324;
        case 0x3e3328u: goto label_3e3328;
        case 0x3e332cu: goto label_3e332c;
        case 0x3e3330u: goto label_3e3330;
        case 0x3e3334u: goto label_3e3334;
        case 0x3e3338u: goto label_3e3338;
        case 0x3e333cu: goto label_3e333c;
        case 0x3e3340u: goto label_3e3340;
        case 0x3e3344u: goto label_3e3344;
        case 0x3e3348u: goto label_3e3348;
        case 0x3e334cu: goto label_3e334c;
        case 0x3e3350u: goto label_3e3350;
        case 0x3e3354u: goto label_3e3354;
        case 0x3e3358u: goto label_3e3358;
        case 0x3e335cu: goto label_3e335c;
        case 0x3e3360u: goto label_3e3360;
        case 0x3e3364u: goto label_3e3364;
        case 0x3e3368u: goto label_3e3368;
        case 0x3e336cu: goto label_3e336c;
        case 0x3e3370u: goto label_3e3370;
        case 0x3e3374u: goto label_3e3374;
        case 0x3e3378u: goto label_3e3378;
        case 0x3e337cu: goto label_3e337c;
        case 0x3e3380u: goto label_3e3380;
        case 0x3e3384u: goto label_3e3384;
        case 0x3e3388u: goto label_3e3388;
        case 0x3e338cu: goto label_3e338c;
        case 0x3e3390u: goto label_3e3390;
        case 0x3e3394u: goto label_3e3394;
        case 0x3e3398u: goto label_3e3398;
        case 0x3e339cu: goto label_3e339c;
        case 0x3e33a0u: goto label_3e33a0;
        case 0x3e33a4u: goto label_3e33a4;
        case 0x3e33a8u: goto label_3e33a8;
        case 0x3e33acu: goto label_3e33ac;
        case 0x3e33b0u: goto label_3e33b0;
        case 0x3e33b4u: goto label_3e33b4;
        case 0x3e33b8u: goto label_3e33b8;
        case 0x3e33bcu: goto label_3e33bc;
        case 0x3e33c0u: goto label_3e33c0;
        case 0x3e33c4u: goto label_3e33c4;
        default: break;
    }

    ctx->pc = 0x3e30e0u;

label_3e30e0:
    // 0x3e30e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3e30e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3e30e4:
    // 0x3e30e4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x3e30e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_3e30e8:
    // 0x3e30e8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x3e30e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_3e30ec:
    // 0x3e30ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e30ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e30f0:
    // 0x3e30f0: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x3e30f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_3e30f4:
    // 0x3e30f4: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x3e30f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_3e30f8:
    // 0x3e30f8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3e30f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e30fc:
    // 0x3e30fc: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x3e30fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3e3100:
    // 0x3e3100: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3e3100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3e3104:
    // 0x3e3104: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x3e3104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_3e3108:
    // 0x3e3108: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x3e3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_3e310c:
    // 0x3e310c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x3e310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_3e3110:
    // 0x3e3110: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x3e3110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_3e3114:
    // 0x3e3114: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3e3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3e3118:
    // 0x3e3118: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x3e3118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3e311c:
    // 0x3e311c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3e311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e3120:
    // 0x3e3120: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e3120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e3124:
    // 0x3e3124: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e3128:
    // 0x3e3128: 0x40f809  jalr        $v0
label_3e312c:
    if (ctx->pc == 0x3E312Cu) {
        ctx->pc = 0x3E312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3128u;
        // 0x3e312c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3130u;
        goto label_3e3130;
    }
    ctx->pc = 0x3E3128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3130u);
        ctx->pc = 0x3E312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3128u;
        // 0x3e312c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3128u, 0x3E3130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3130u;
label_3e3130:
    // 0x3e3130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3134:
    // 0x3e3134: 0xc0ea146  jal         func_3A8518
label_3e3138:
    if (ctx->pc == 0x3E3138u) {
        ctx->pc = 0x3E3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3134u;
        // 0x3e3138: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E313Cu;
        goto label_3e313c;
    }
    ctx->pc = 0x3E3134u;
    SET_GPR_U32(ctx, 31, 0x3E313Cu);
    ctx->pc = 0x3E3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3134u;
    // 0x3e3138: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E3134u, 0x3E313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E313Cu;
label_3e313c:
    // 0x3e313c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e313cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3140:
    // 0x3e3140: 0xc0ea13a  jal         func_3A84E8
label_3e3144:
    if (ctx->pc == 0x3E3144u) {
        ctx->pc = 0x3E3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3140u;
        // 0x3e3144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3148u;
        goto label_3e3148;
    }
    ctx->pc = 0x3E3140u;
    SET_GPR_U32(ctx, 31, 0x3E3148u);
    ctx->pc = 0x3E3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3140u;
    // 0x3e3144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E3140u, 0x3E3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3148u;
label_3e3148:
    // 0x3e3148: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e3148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e314c:
    // 0x3e314c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e314cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e3150:
    // 0x3e3150: 0xc0ea12a  jal         func_3A84A8
label_3e3154:
    if (ctx->pc == 0x3E3154u) {
        ctx->pc = 0x3E3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3150u;
        // 0x3e3154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3158u;
        goto label_3e3158;
    }
    ctx->pc = 0x3E3150u;
    SET_GPR_U32(ctx, 31, 0x3E3158u);
    ctx->pc = 0x3E3154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3150u;
    // 0x3e3154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E3150u, 0x3E3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3158u;
label_3e3158:
    // 0x3e3158: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e3158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e315c:
    // 0x3e315c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e3160:
    // 0x3e3160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e3160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3164:
    // 0x3e3164: 0xc0ea12a  jal         func_3A84A8
label_3e3168:
    if (ctx->pc == 0x3E3168u) {
        ctx->pc = 0x3E3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3164u;
        // 0x3e3168: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E316Cu;
        goto label_3e316c;
    }
    ctx->pc = 0x3E3164u;
    SET_GPR_U32(ctx, 31, 0x3E316Cu);
    ctx->pc = 0x3E3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3164u;
    // 0x3e3168: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E3164u, 0x3E316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E316Cu;
label_3e316c:
    // 0x3e316c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e316cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3170:
    // 0x3e3170: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3e3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e3174:
    // 0x3e3174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e3174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e3178:
    // 0x3e3178: 0xc0e858c  jal         func_3A1630
label_3e317c:
    if (ctx->pc == 0x3E317Cu) {
        ctx->pc = 0x3E317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3178u;
        // 0x3e317c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3180u;
        goto label_3e3180;
    }
    ctx->pc = 0x3E3178u;
    SET_GPR_U32(ctx, 31, 0x3E3180u);
    ctx->pc = 0x3E317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3178u;
    // 0x3e317c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E3178u, 0x3E3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3180u;
label_3e3180:
    // 0x3e3180: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e3180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e3184:
    // 0x3e3184: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x3e3184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_3e3188:
    // 0x3e3188: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3e3188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3e318c:
    // 0x3e318c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3e318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3e3190:
    // 0x3e3190: 0xaee20054  sw          $v0, 0x54($s7)
    ctx->pc = 0x3e3190u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 84), GPR_U32(ctx, 2));
label_3e3194:
    // 0x3e3194: 0xc1073cc  jal         func_41CF30
label_3e3198:
    if (ctx->pc == 0x3E3198u) {
        ctx->pc = 0x3E3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3194u;
        // 0x3e3198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E319Cu;
        goto label_3e319c;
    }
    ctx->pc = 0x3E3194u;
    SET_GPR_U32(ctx, 31, 0x3E319Cu);
    ctx->pc = 0x3E3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3194u;
    // 0x3e3198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E3194u, 0x3E319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E319Cu;
label_3e319c:
    // 0x3e319c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e31a0:
    // 0x3e31a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e31a4:
    if (ctx->pc == 0x3E31A4u) {
        ctx->pc = 0x3E31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31A0u;
        // 0x3e31a4: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E31A8u;
        goto label_3e31a8;
    }
    ctx->pc = 0x3E31A0u;
    {
        const bool branch_taken_0x3e31a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31A0u;
        // 0x3e31a4: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e31a0) {
            ctx->pc = 0x3E31BCu;
            goto label_3e31bc;
        }
    }
    ctx->pc = 0x3E31A8u;
label_3e31a8:
    // 0x3e31a8: 0x8ee30054  lw          $v1, 0x54($s7)
    ctx->pc = 0x3e31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_3e31ac:
    // 0x3e31ac: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3e31acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3e31b0:
    // 0x3e31b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e31b4:
    // 0x3e31b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e31b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e31b8:
    // 0x3e31b8: 0xaee30054  sw          $v1, 0x54($s7)
    ctx->pc = 0x3e31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 84), GPR_U32(ctx, 3));
label_3e31bc:
    // 0x3e31bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e31bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e31c0:
    // 0x3e31c0: 0x2694b8b8  addiu       $s4, $s4, -0x4748
    ctx->pc = 0x3e31c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949048));
label_3e31c4:
    // 0x3e31c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e31c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e31c8:
    // 0x3e31c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e31c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e31cc:
    // 0x3e31cc: 0xc0cd4ee  jal         func_3353B8
label_3e31d0:
    if (ctx->pc == 0x3E31D0u) {
        ctx->pc = 0x3E31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31CCu;
        // 0x3e31d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E31D4u;
        goto label_3e31d4;
    }
    ctx->pc = 0x3E31CCu;
    SET_GPR_U32(ctx, 31, 0x3E31D4u);
    ctx->pc = 0x3E31D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E31CCu;
    // 0x3e31d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E31CCu, 0x3E31D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E31D4u;
label_3e31d4:
    // 0x3e31d4: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3e31d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3e31d8:
    // 0x3e31d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e31d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e31dc:
    // 0x3e31dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e31dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e31e0:
    // 0x3e31e0: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3e31e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e31e4:
    // 0x3e31e4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e31e8:
    // 0x3e31e8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3e31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3e31ec:
    // 0x3e31ec: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e31f0:
    // 0x3e31f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e31f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3e31f4:
    // 0x3e31f4: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3e31f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3e31f8:
    // 0x3e31f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e31fc:
    // 0x3e31fc: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x3e31fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3e3200:
    // 0x3e3200: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e3200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3e3204:
    // 0x3e3204: 0xaee200c4  sw          $v0, 0xC4($s7)
    ctx->pc = 0x3e3204u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 196), GPR_U32(ctx, 2));
label_3e3208:
    // 0x3e3208: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x3e3208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_3e320c:
    // 0x3e320c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e320cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e3210:
    // 0x3e3210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e3210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e3214:
    // 0x3e3214: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3e3214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3e3218:
    // 0x3e3218: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e3218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e321c:
    // 0x3e321c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e321cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e3220:
    // 0x3e3220: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e3220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e3224:
    // 0x3e3224: 0x7fc20010  sq          $v0, 0x10($fp)
    ctx->pc = 0x3e3224u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 2));
label_3e3228:
    // 0x3e3228: 0xaef100b4  sw          $s1, 0xB4($s7)
    ctx->pc = 0x3e3228u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 180), GPR_U32(ctx, 17));
label_3e322c:
    // 0x3e322c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3e322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3e3230:
    // 0x3e3230: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3e3230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3e3234:
    // 0x3e3234: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3238:
    // 0x3e3238: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e3238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e323c:
    // 0x3e323c: 0xaee000bc  sw          $zero, 0xBC($s7)
    ctx->pc = 0x3e323cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 188), GPR_U32(ctx, 0));
label_3e3240:
    // 0x3e3240: 0x7ee20010  sq          $v0, 0x10($s7)
    ctx->pc = 0x3e3240u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 2));
label_3e3244:
    // 0x3e3244: 0xc0cd518  jal         func_335460
label_3e3248:
    if (ctx->pc == 0x3E3248u) {
        ctx->pc = 0x3E3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3244u;
        // 0x3e3248: 0xaee300b0  sw          $v1, 0xB0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E324Cu;
        goto label_3e324c;
    }
    ctx->pc = 0x3E3244u;
    SET_GPR_U32(ctx, 31, 0x3E324Cu);
    ctx->pc = 0x3E3248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3244u;
    // 0x3e3248: 0xaee300b0  sw          $v1, 0xB0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E3244u, 0x3E324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E324Cu;
label_3e324c:
    // 0x3e324c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3e324cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3e3250:
    // 0x3e3250: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3e3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e3254:
    // 0x3e3254: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3e3258:
    // 0x3e3258: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e3258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e325c:
    // 0x3e325c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3e325cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e3260:
    // 0x3e3260: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x3e3260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3e3264:
    // 0x3e3264: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3e3264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3e3268:
    // 0x3e3268: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e3268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e326c:
    // 0x3e326c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e326cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3270:
    // 0x3e3270: 0xe6e000c0  swc1        $f0, 0xC0($s7)
    ctx->pc = 0x3e3270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 192), bits); }
label_3e3274:
    // 0x3e3274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3278:
    // 0x3e3278: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e3278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e327c:
    // 0x3e327c: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x3e327cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_3e3280:
    // 0x3e3280: 0x84710070  lh          $s1, 0x70($v1)
    ctx->pc = 0x3e3280u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3e3284:
    // 0x3e3284: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3e3284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3e3288:
    // 0x3e3288: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3e3288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3e328c:
    // 0x3e328c: 0x2f18821  addu        $s1, $s7, $s1
    ctx->pc = 0x3e328cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_3e3290:
    // 0x3e3290: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3e3290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3e3294:
    // 0x3e3294: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3e3294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3e3298:
    // 0x3e3298: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3e3298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e329c:
    // 0x3e329c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3e329cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e32a0:
    // 0x3e32a0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3e32a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e32a4:
    // 0x3e32a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3e32a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3e32a8:
    // 0x3e32a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e32a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e32ac:
    // 0x3e32ac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e32acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e32b0:
    // 0x3e32b0: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3e32b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e32b4:
    // 0x3e32b4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3e32b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3e32b8:
    // 0x3e32b8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3e32b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3e32bc:
    // 0x3e32bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3e32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3e32c0:
    // 0x3e32c0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e32c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e32c4:
    // 0x3e32c4: 0xc136b24  jal         func_4DAC90
label_3e32c8:
    if (ctx->pc == 0x3E32C8u) {
        ctx->pc = 0x3E32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32C4u;
        // 0x3e32c8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E32CCu;
        goto label_3e32cc;
    }
    ctx->pc = 0x3E32C4u;
    SET_GPR_U32(ctx, 31, 0x3E32CCu);
    ctx->pc = 0x3E32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E32C4u;
    // 0x3e32c8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E32C4u, 0x3E32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E32CCu;
label_3e32cc:
    // 0x3e32cc: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3e32ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e32d0:
    // 0x3e32d0: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x3e32d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e32d4:
    // 0x3e32d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e32d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e32d8:
    // 0x3e32d8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3e32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3e32dc:
    // 0x3e32dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3e32e0:
    // 0x3e32e0: 0x40f809  jalr        $v0
label_3e32e4:
    if (ctx->pc == 0x3E32E4u) {
        ctx->pc = 0x3E32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32E0u;
        // 0x3e32e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E32E8u;
        goto label_3e32e8;
    }
    ctx->pc = 0x3E32E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E32E8u);
        ctx->pc = 0x3E32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32E0u;
        // 0x3e32e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E32E0u, 0x3E32E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E32E8u;
label_3e32e8:
    // 0x3e32e8: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x3e32e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3e32ec:
    // 0x3e32ec: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3e32ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e32f0:
    // 0x3e32f0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e32f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e32f4:
    // 0x3e32f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e32f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e32f8:
    // 0x3e32f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e32f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e32fc:
    // 0x3e32fc: 0x86320078  lh          $s2, 0x78($s1)
    ctx->pc = 0x3e32fcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3e3300:
    // 0x3e3300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e3300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e3304:
    // 0x3e3304: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e3304u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3e3308:
    // 0x3e3308: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e3308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e330c:
    // 0x3e330c: 0x2f29021  addu        $s2, $s7, $s2
    ctx->pc = 0x3e330cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_3e3310:
    // 0x3e3310: 0xc0cd55c  jal         func_335570
label_3e3314:
    if (ctx->pc == 0x3E3314u) {
        ctx->pc = 0x3E3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3310u;
        // 0x3e3314: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3318u;
        goto label_3e3318;
    }
    ctx->pc = 0x3E3310u;
    SET_GPR_U32(ctx, 31, 0x3E3318u);
    ctx->pc = 0x3E3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3310u;
    // 0x3e3314: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3E3310u, 0x3E3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3318u;
label_3e3318:
    // 0x3e3318: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3e3318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3e331c:
    // 0x3e331c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e331cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e3320:
    // 0x3e3320: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e3320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e3324:
    // 0x3e3324: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3e3324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3e3328:
    // 0x3e3328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e3328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e332c:
    // 0x3e332c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3e332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3e3330:
    // 0x3e3330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3334:
    // 0x3e3334: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3e3334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e3338:
    // 0x3e3338: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3e3338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3e333c:
    // 0x3e333c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e333cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3340:
    // 0x3e3340: 0xc136afa  jal         func_4DABE8
label_3e3344:
    if (ctx->pc == 0x3E3344u) {
        ctx->pc = 0x3E3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3340u;
        // 0x3e3344: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3348u;
        goto label_3e3348;
    }
    ctx->pc = 0x3E3340u;
    SET_GPR_U32(ctx, 31, 0x3E3348u);
    ctx->pc = 0x3E3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3340u;
    // 0x3e3344: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E3340u, 0x3E3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3348u;
label_3e3348:
    // 0x3e3348: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e3348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e334c:
    // 0x3e334c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3350:
    // 0x3e3350: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3e3350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3e3354:
    // 0x3e3354: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3358:
    // 0x3e3358: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e3358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e335c:
    // 0x3e335c: 0xc136b24  jal         func_4DAC90
label_3e3360:
    if (ctx->pc == 0x3E3360u) {
        ctx->pc = 0x3E3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E335Cu;
        // 0x3e3360: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3364u;
        goto label_3e3364;
    }
    ctx->pc = 0x3E335Cu;
    SET_GPR_U32(ctx, 31, 0x3E3364u);
    ctx->pc = 0x3E3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E335Cu;
    // 0x3e3360: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E335Cu, 0x3E3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3364u;
label_3e3364:
    // 0x3e3364: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3e3364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3368:
    // 0x3e3368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e336c:
    // 0x3e336c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3e336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3e3370:
    // 0x3e3370: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e3370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e3374:
    // 0x3e3374: 0x40f809  jalr        $v0
label_3e3378:
    if (ctx->pc == 0x3E3378u) {
        ctx->pc = 0x3E3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3374u;
        // 0x3e3378: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E337Cu;
        goto label_3e337c;
    }
    ctx->pc = 0x3E3374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E337Cu);
        ctx->pc = 0x3E3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3374u;
        // 0x3e3378: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3374u, 0x3E337Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E337Cu;
label_3e337c:
    // 0x3e337c: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x3e337cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
label_3e3380:
    // 0x3e3380: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x3e3380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
label_3e3384:
    // 0x3e3384: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x3e3384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3e3388:
    // 0x3e3388: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e3388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e338c:
    // 0x3e338c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x3e338cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3e3390:
    // 0x3e3390: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x3e3390u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
label_3e3394:
    // 0x3e3394: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x3e3394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3e3398:
    // 0x3e3398: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x3e3398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3e339c:
    // 0x3e339c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x3e339cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3e33a0:
    // 0x3e33a0: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x3e33a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3e33a4:
    // 0x3e33a4: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x3e33a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e33a8:
    // 0x3e33a8: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x3e33a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e33ac:
    // 0x3e33ac: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x3e33acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e33b0:
    // 0x3e33b0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3e33b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3e33b4:
    // 0x3e33b4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x3e33b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e33b8:
    // 0x3e33b8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x3e33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e33bc:
    // 0x3e33bc: 0x3e00008  jr          $ra
label_3e33c0:
    if (ctx->pc == 0x3E33C0u) {
        ctx->pc = 0x3E33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E33BCu;
        // 0x3e33c0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E33C4u;
        goto label_3e33c4;
    }
    ctx->pc = 0x3E33BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E33BCu;
        // 0x3e33c0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E33BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E33C4u;
label_3e33c4:
    // 0x3e33c4: 0x0  nop
    ctx->pc = 0x3e33c4u;
    // NOP
    ctx->pc = 0x3e33c8u;
}
